#include<stdio.h>
int main(){
    //datatype arrray_name[size];
   int arr[5] = {10,20,30,40,50}; //declaring & initializing an array
    printf("The array elements are as follows:\n");
    for(int i=0; i<5; i++){
        printf("%d\t", arr[i]);
    }
}

