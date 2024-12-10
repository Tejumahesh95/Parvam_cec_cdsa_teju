#include<stdio.h>
int main(){
    int num;
    printf("Enter the range to print the numbers:");
    scanf("%d",&num);
    //for(initilization; condition; increment/Decrement)
    printf("the numbers between 0 to %d are as follows:\n:", num);
    for(int i=0; i<=num; i++){
        
        printf("%d\n",i);
    }        
}
