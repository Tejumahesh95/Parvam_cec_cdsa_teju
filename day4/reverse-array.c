#include<stdio.h>
int main(){
    int size;
    printf("Enter the number of elements:");
    scanf("%d",&size);
    int arr[size];
    printf("Enter the elements of an array:");
    for(int i=0; i<size;i++){
        scanf("%d", &arr[i]);
    }
    printf("original array elements are as follows:\n");
    for(int i=0; i<size; i++){
        printf("%d\t", arr[i]);
    }
    printf("\nReversed Array elements are as follows:\n");
    for(int i=size-1; i>=0; i--){
        printf("%d\t", arr[i]);
    }
}           
