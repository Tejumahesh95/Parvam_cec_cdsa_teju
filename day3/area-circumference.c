#include<stdio.h>
#define PI 3.142
float area (float rad){
    return PI * rad * rad;
}
float circumference(float rad){
    return 2 * PI * rad;
}
int main(){
    float radius, result;
    printf("Enter the radius of the circle:");
    scanf("%f", &radius);
    result=area(radius);//function call for area
    printf("area of circle for the given radius(%f):%f\n", radius, result);
    result= circumference(radius);//function call for circumference
    printf("circumference of cirle for the given radius(%f): %f", radius, result);
}


