#include <stdio.h>
#include <string.h>

struct Medicine_t {
    int id;
    char name[50];        
    char expiry_date[11];  
    float price;
};

typedef struct Medicine_t Medicine;

void readMedicine(Medicine med[], int n) {
    printf("Enter details (ID, Name, Expiry Date, Price):\n");
    for (int i = 0; i < n; i++) {
        printf("Medicine %d:\n", i + 1);


        printf("Enter ID: ");
        scanf("%d", &med[i].id);
        
        // Clear the newline character from the input buffer
        while(getchar() != '\n');
        
        // Read the name (allow spaces) using scanf with %[^\n]
        printf("Enter Name: ");
        scanf("%[^\n]%*c", med[i].name);  // This reads the entire line for the name

        // Read the expiry date and price
        printf("Enter Expiry Date (YYYY-MM-DD): ");
        scanf("%s", med[i].expiry_date);

        printf("Enter Price: ");
        scanf("%f", &med[i].price);
    }
}

void saveMedicine(Medicine med[], int n) {
    FILE* file = fopen(filename, "w");
    if (file == NULL) {
        printf("Cannot create file.\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        fprintf(file, "%d, %s, %s, %.2f\n", med[i].id, med[i].name, med[i].expiry_date, med[i].price);
    }
    fclose(file);
}

void loadMedicine(Medicine med[], int n) {
    FILE* file = fopen(filename, "r");
    if (file == NULL) {
        printf("Cannot open file.\n");
        return;
    }
    for (int i = 0; i < n; i++) {
        fscanf(file, "%d, %[^\n], %s, %f", &med[i].id, med[i].name, med[i].expiry_date, &med[i].price);
    }
    fclose(file);
}

// Function to swap two medicines
void swap(Medicine* a, Medicine* b) {
    Medicine temp = *a;
    *a = *b;
    *b = temp;
}

// Function to compare expiry dates (returns negative if a < b, positive if a > b)
int compareExpiryDate(const char* date1, const char* date2) {
    return strcmp(date1, date2);
}

// Function to sort medicines by expiry date
void sortMedicines(Medicine med[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - 1 - i; j++) {
            if (compareExpiryDate(med[j].expiry_date, med[j + 1].expiry_date) > 0) {
                swap(&med[j], &med[j + 1]);
            }
        }
    }
}

// Function to display medicine details
void displayMedicine(Medicine med[], int n) {
    printf("\nSorted Medicines (by Expiry Date):\n");
    for (int i = 0; i < n; i++) {
        printf("%d. %s - %s\n", i + 1, med[i].name, med[i].expiry_date);
    }
}

int main() {
    int medicineCount;
    printf("Enter number of medicines: ");
    scanf("%d", &medicineCount);

    Medicine medicines[medicineCount];

    readMedicine(medicines, medicineCount);
    
    saveMedicine(medicines, medicineCount, "medicine_inventory.txt");

    sortMedicines(medicines, medicineCount);
    
    displayMedicine(medicines, medicineCount);
    
    saveMedicine(medicines, medicineCount, "medicine_inventory_sorted.txt");

    return 0;
}
