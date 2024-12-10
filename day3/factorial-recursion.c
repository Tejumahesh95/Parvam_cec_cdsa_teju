#include<stdio.h>
int factorial(int num){
    if (num == 0 || num == 1){
       return 1;
    }
    return num * factorial(num - 1);
}
int main(){
    int number, result;
    printf("Enter a number to find the factorial:");
    scanf("%d", &number);
    result = factorial(number);
    printf("The factorial of %d is: %d", number, result);
}