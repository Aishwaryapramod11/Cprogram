#include<stdio.h>
int main(){
  int i,n,largest,smallest,positionLargest=1,positionSmallest=1;
  printf("enter the number of elements");
  scanf("%d",&n);
  int number[n];
  printf("enter the %d elements:",n);
  
  for(i=0;i<n;i++){
  scanf("%d",&number[i]);
  }
    largest=number[0];
    smallest=number[0];
    
    for(i=0;i<n;i++){
      if(number[i]>largest){
          largest=number[i];
          positionLargest=i+1;
      }
      if(number[i]<smallest){
          smallest=number[i];
          positionSmallest=i+1;
          }
    }
     printf("the largest number is %d",largest);
     printf("the smallest number is%d",smallest);
     printf("the position of largest number is %d",positionLargest);
     printf("the position of smallest number is %d",positionSmallest);
     return 0;
}
       
    

