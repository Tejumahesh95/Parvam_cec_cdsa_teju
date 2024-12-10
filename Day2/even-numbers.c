#include<stdio.h>
int main(){
    int num;
    printf("Enter the range to print the even numbers:");
    scanf("%d",&num);
    //for(initilization; condition; increment/Decrement)
    printf("the even numbers between 0 to %d are as follows:\n:", num);
    for(int i=0; i<=num; i++){
        if(i%2!==0){
            printf("%d\n",i);
        }        
    } 
} 

num = 8
step 1:
    i=0, 0<=8 - T
    0%2 = 0 - T
    0
step 2: i => 1
    1 < = 8 - t


