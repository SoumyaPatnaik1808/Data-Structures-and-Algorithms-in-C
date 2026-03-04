#include <stdio.h>

int sum(int); 

int main(){
    int a,b; 
    printf("Enter a number: ");
    scanf("%d", &a);
    b = sum(a);
    printf("The sum is %d", b);
    return 0;
}

int sum(int x){
    int s = 0; 
    for(int i=1; i<=x; i++){
        s = s + i;
    }
    return s;  
    }
