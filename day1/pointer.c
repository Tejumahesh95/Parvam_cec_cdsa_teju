#include<stdio.h>
int main(){
    int num = 3 0;
    printf("The value of number: %d\n", num);
    printf("The address of number(%d): %p\n",num,&num);
    //datatype* pointer_variable = &reference
    int* ptr = &num; //pointer variable - ptr
    printf("The address of pointer: %p\n",ptr);
    printf("The value of pointer: %d\n", *ptr);
}