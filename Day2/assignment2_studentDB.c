#include <stdio.h>
#include <stdlib.h>

struct Student {
    char name[100];
    int marks;
};

int main() {
    int n;
    printf("Enter number of students: ");
    scanf("%d", &n);
    
    // memory allocation for n students
    struct Student* students = (struct Student*)malloc(n * sizeof(struct Student));
    
    if (students == NULL) {
        printf("Memory allocation failed!\n");
        return 1; // Exit if memory allocation fails
    }
    
    // Input student details
    for (int i = 0; i < n; i++) {
        printf("Enter Student %d Name: ", i + 1);
        scanf("%s", students[i].name);
        
        printf("Enter Marks: ");
        scanf("%d", &students[i].marks);
    }
    
    // Display student details
    printf("\nStudent Records:\n");
    for (int i = 0; i < n; i++) {
        printf("%s - %d\n", students[i].name, students[i].marks);
    }
    
    free(students);
    
    return 0;
}
