#include<stdio.h>
#include<string.h>
int main(){
    char f_name[20], l_name[20], name[50];
    printf("Enter your First Name:");
    scanf("%s", f_name);
    printf("Enter your Last Name:");
    scanf("%s", l_name);
    //strcpy=> string copy-> strcpy(resultstring, orgstring)
    strcpy(name, f_name);
    strcat(name, l_name);
    printf("Full Name: %s\n", name);
    printf("Full Name: %s\n", name);//using string handling functions
    printf("Full Name in uppercase: %s\n",strupr(name));
    printf("Full Name in lowercase: %s\n", strlwr(name));
    printf("Full Name is reversed: %s", strrev(name));
}
