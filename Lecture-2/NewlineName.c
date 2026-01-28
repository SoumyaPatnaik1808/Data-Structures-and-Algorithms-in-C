#include <stdio.h>
int main(){
    char firstname[30], lastname[30];
    printf("Enter your first name: ");
    scanf("%29s", firstname); 
    printf("Enter your last name:"); 
    scanf("%29s", lastname); 
    printf("%s\n%s\n", firstname, lastname); 
    return 0; 
}