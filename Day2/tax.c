#include<stdio.h>
#include<string.h>
int main() {
    int vehicleCount;
    char vehicleType[10];

    printf("Enter the number of vehicles:");
    scanf("%d",&vehicleCount);
    
    float collection=0;
    
    for(int I = 1; I <= vehicleCount; I++) {
        printf("Enter vehicle type:");
        scanf("%s",vehicleType);   
        if(strcmp(vehicleType,"Car")==0) {
            collection +=50;
        } else if(strcmp(vehicleType,"truck")==0){
            collection +=100;      
        }else if(strcmp(vehicleType,"Bike")==0){
            collection +=20;
        }
    }
printf("Total toll collection:%.2f\n",collection);

    return 0;
}

