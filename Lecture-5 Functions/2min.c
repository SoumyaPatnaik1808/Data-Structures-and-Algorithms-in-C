#include <stdio.h>

int min(int, int);

int main(){
    int a,b,c; 
    c = min(a,b); // a and b are parameters (parameters are the copy of the arguments)
    printf("The minimum is %d", c);
    return 0; 
}

int min(int x, int y){ // x and y are arguments (Arguments are the actual values passed to the function)
    printf("Enter two numbers: ");
    scanf("%d %d", &x, &y);
    if(x<y){
        return x;
    }
    else{
        return y;
    }
}
