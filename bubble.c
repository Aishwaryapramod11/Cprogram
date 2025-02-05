#include<stdio.h>
int main(){
   int i,n;
   printf("enter the number of elements");
   scanf("%d",&n);
   int numbers[n];
  printf("enter the %d elements:",n);
  
  for(i=0;i<n;i++){
    scanf("%d",&numbers[i]);
  }
  for(i=0;i<n-1;i++){
   for(int j=0;j<n-i;j++){
      if(numbers[j]>numbers[j+1]){
         int temp =numbers[j];
         numbers[j]=numbers[j+1];
         numbers[j+1]=temp;
      }
    } 
   }
   printf("the sorted array:\t");
   for(i=0;i<n;i++){
     printf("%d\t",numbers[i]);
   }

   
   return 0;
}
   
   
