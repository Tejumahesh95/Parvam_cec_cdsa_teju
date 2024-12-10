#include<stdio.h>
int main(){
    char str[20], rev[20];
    printf("Enter any world:");
    scanf("%s", str);
    printf("orignal string: %S\n", str);
    strcpy(rev, str);
    strrev(str);
    printf("Reversed string: %s\n", str);
    if(strcmp(str,rev) == 0){
        printf("The givrn word is a palindrome");
    }
    else{
        printf("The given word is not a palindrome");
    }
}