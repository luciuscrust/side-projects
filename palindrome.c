#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool isPalindrome(int x) {
    char str[20];
    sprintf(str,"%d",x);
    int len = strlen(str);
    int i;
    for(i = 0; i<len/2;i++){
        if(str[i]!=str[len-i-1]){
            return false;
        }
    }
    return true;
}

int main(){
    int x;
    printf("input number: \n");
    scanf("%d",&x);
    
    if(isPalindrome(x)){
        printf("Number is palindrome!!!\n");
    }
    else{
        printf("Number is not palindrome!!!\n");
    }
    return 0;
}