#include<stdio.h>
int main(){
    int size;
    printf("Enter the size of an array:");
    scanf("%d", &size);
    int arr[size];
    printf("Enter the elements of an array:");
    for(int i=0; i<size; i++){
        scanf("%d", &arr[i]);
    }
    int target=0, count=0;
    printf("Enter the target element which need to be found:");
    scanf("%d", &target);
    for(int i=0; i<size; i++){
        if(arr[i] == target){
            printf("The target element %d is found at index : %d", target, i);
            count++;
        }
    }
    printf("The target element %d is reapeated %d times", target, count);
}
        
    
    
    
    
           