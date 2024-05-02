#include <stdio.h>
#include <math.h>
#include <stdbool.h>


bool isPowerOfThree(int n) {

   if(n<=0){
       return false;
   }
   while(n%3==0){
       n/=3;  
   }
    
   return n==1;
    
}

int main() {
    int n;
    
    printf("Input number: \n");
    scanf("%d", &n);
    
    bool result = isPowerOfThree(n);
    if (result) {
        printf("%dʌ3.\n", n);
    } else {
        printf("%d is not a power of 3.\n", n);
    }

    return 0;
}