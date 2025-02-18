#include<stdio.h>

int main() {
    int n,i;
    int weights;
    printf("Enter the number of products:");
    scanf("%d",&n);
    
    int accepted_count=0;
    int rejected_count=0;
    for(i=0;i<n;i++)
    {
      printf("Enter the weight of products in grams");
      scanf("%d",&weights);
        if(weights >=950 && weights<=1050){
            accepted_count++;
        }
        else{
          rejected_count++;
        }
    }
printf("Accepted Products: %d\n",accepted_count);
printf("Rejected Products: %d\n",rejected_count);

}
