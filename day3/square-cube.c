#include<stdio.h>
int square(int a){
    return a*a;
}
int cube(int a){
    return a*a*a;
}
int main(){
    printf("Enter a number to find it's square and cube:");
    scanf("%d", &num);
    result= square(num); //function call for square function
    printf("The squae of %d is: %d\n", num, result);
    result= cube(num);//function call for cube function
    printf("The cube of %d is: %d", num, result);
}
