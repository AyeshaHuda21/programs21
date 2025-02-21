#include<stdio.h>
//structure representation of employees
struct Student_t{
    int rollNo;
    char name[50];
    int maths, physics,chemistry,cs;
    int total;
    float percentage;
    char grade;
};

typedef struct Student_t Student;
void readStudents(Student std[],int n);
void findPercentage(Student std[],int n);
void displayStudents(Student std[],int n);

//main function
int main(){
int studentcount,count;
printf("Enter number of students:");
scanf("%d",&studentcount);
Student students[1000];
readStudents(students,studentcount);
findPercentage(students,studentcount);
displayStudents(students,studentcount);
return 0;
}
//fucntion to read students
void readStudents(Student std[],int n){
    int i,j;
    printf("Enter %d student details",n);
    for(i=0;i<n;i++){
        scanf("%d%s",&std[i].rollNo,std[i].name);
    }
}
//function to display students
void displayStudents(Student std[],int n){
    printf("\n\nROLLNO\tNAME\tMATHS\tPHYSICS\tCHEM\tCS\tTOTAL\tPERCENTAGE\tGRADE\n");
    for(int i=0;i<n;i++){
        printf("%d\t\t%s\t\t%d\t\t%d\t\t%d\t\t%d\t\t%d\t\t%f\t\t%c\n",std[i].rollNo,std[i].name,std[i].maths,std[i].physics,std[i].chemistry,std[i].cs,std[i].total,std[i].percentage,std[i].grade);
        printf("\n");
}
}
//function to find highest percentage
void findPercentage(Student std[],int n){
    for(int i=0;i<n;i++){
        printf("Enter student%d marks:",i);
        scanf("%d%d%d%d",&std[i].maths,&std[i].physics,&std[i].chemistry,&std[i].cs);
        std[i].total=((std[i].maths)+(std[i].physics)+(std[i].chemistry)+(std[i].cs));
        std[i].percentage=std[i].total*(0.25);
        if(std[i].percentage>=90){
            std[i].grade='A';
        }
        else if(std[i].percentage>=70&&std[i].percentage<80){
            std[i].grade='B';
        }
        else if(std[i].percentage>=60&&std[i].percentage<70){
            std[i].grade='C';
        }
        else if(std[i].percentage>=50&&std[i].percentage<60){
            std[i].grade='D';
        }
        else{
            std[i].grade='F';

        }
    }
    return;
}
