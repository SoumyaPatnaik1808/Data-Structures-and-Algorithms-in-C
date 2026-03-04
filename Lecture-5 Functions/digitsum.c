#include <stdio.h>

int digitsum(int);
int main(){
  printf("Enter a number:");
  int n;    
  scanf("%d", &n);
    printf("The sum of the digits of %d is %d", n, digitsum(n));
    return 0;

}

int digitsum(int x){
    int s =0; 
    int remainder;
    while(x>0){
        remainder = x%10; 
        s = s + remainder;
        x = x/10;
    }
    return s;
    }
