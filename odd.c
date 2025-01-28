#include<stdio.h>
int main(){
    int num;
    printf("enter a number:");
    scanf("%d",&num);
    if (num%2==0){
        printf("the num is even:",num);
    }else{
        printf("the num is odd:",num);
    }
    return 0;
}