#include<stdio.h>
int main(){
    char operator;
    float op1, op2, result;
    printf("Enter the operator(+,-,*,/):");
    scanf(" %c",&operator);
    printf("Enter any two numbers:");
    scanf("%f %f", &op1, &op2);
    switch (operator)
    {
    case '+':
        result = op1 + op2;
        printf("sum of %f & %f: %f", op1, op2, result);
        break;
    case '-':
        result = op1 - op2;
        printf("diff of %f & %f: %f", op1, op2, result);
        break;
    case '*':
        result = op1 * op2;
        printf("product of %f & %f: %f", op1, op2, result);
        break; 
    case '/':
        result = op1 / op2;
        printf("quotient of %f & %f: %f", op1, op2, result);
        break;
    default:
        printf("Invalid input. Please try again with proper opeeration!");
        break;
    }
    return 0;
}


        
        