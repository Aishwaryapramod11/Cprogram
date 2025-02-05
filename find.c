#include<stdio.h>
int main(){
     int i,limit,number;
     printf("\n enter the number of elements:");
     scanf("%d",&limit);
     int array[limit];
     printf("\n enter elements:");
     for(i=0;i<limit;i++){
        scanf("%d",&array[i]);
     }
     printf("\n enter the element to search:");
     scanf("%d",&number);
     for(i=0;i<limit;i++) {
          if (array[i]==number){
             printf("The given %d element is found at :%d\n",number,i+1);
          }
     }     
     return 0;
}
