#include <stdio.h>

void displayages(short int* ages,int len, int index){
    if(index>= len)
    {
        return;
    }
    printf("%d",ages[index]);
     printf("\n");
    displayages(ages,5,index+1);
}
   int main() {
     short int ages[]={45,42,14,20,70};
     displayages(ages, 5, 0);
     return 0;

}
