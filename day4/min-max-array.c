#include<stdio.h>
int main(){
    int size;
    printf("Enter the number of elements:");
    scanf("%d", &size);
    int arrOfNum[size];
    printf("Enter %d elements into an array:", size);
    for(int i=0; i<size; i++){
        scanf("%d", &arrOfNum[i]);
    }
    int max, min;
    max = min =  arrOfNum[0];
    for(int i=0; i<size; i++){
        if(arrOfNum[i] > max){
            max = arrOfNum[i];
        }
        if(arrOfNum[i] < min){
            min = arrOfNum[i];
        }
    }
    printf("The largest element in the given array is: %d\n", max);
    printf("The smallest element in the given array is: %d\n", min);
}
    

