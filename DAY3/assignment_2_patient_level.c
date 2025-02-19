#include <stdio.h>
#include <string.h>

#define MAX_PATIENTS 100

// defining a structure to store patient data
typedef struct {
    char name[50];
    int level;
}Patient;

// sorting patients in terms of emergency level
void sortPatients(Patient patients[], int n) {
    Patient temp;
    for (int i = 0; i < n - 1; i++) {
        for (int j = i + 1; j < n; j++) {
            if (patients[i].level < patients[j].level) {
                // Swapping
                temp = patients[i];
                patients[i] = patients[j];
                patients[j] = temp;
            }
        }
    }
}

// Main function
int main() {
    int N;
    
    printf("Enter number of patients: ");
    scanf("%d", &N);

    Patient patients[MAX_PATIENTS];

    // Get the patient data
    printf("Patient Data:\n");
    for (int i = 0; i < N; i++) {
        printf("%d.Enter name: ",i+1);
        scanf("%s", patients[i].name);
        printf("Enter emergency level (1-5): ");
        scanf("%d", &patients[i].level);
    }

    sortPatients(patients, N);

    printf("\nSorted by Emergency Level:\n");
    for (int i = 0; i < N; i++) {
        printf("%s - Level %d\n", patients[i].name, patients[i].level);
    }

    // Display top 3 critical patients
    printf("\nTop 3 Critical Patients:\n");
    for (int i = 0; i < 3 ; i++) {
        printf("%d. %s\n", i + 1, patients[i].name);
    }

    return 0;
}

