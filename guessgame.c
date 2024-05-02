#include<stdio.h>
#include<stdlib.h>

int main(){
    int choice;
    int i;
    int min = 0;
    int max = 100;
    int num = rand() % (max - min + 1) + min;
    
    printf("Welcome to the guessing game where you need to guess the correct number within 10 tries!!! GOODLUCK!!!\n");
    printf("Select number from 1-100\n\n");
    
    
    do{
        printf("Input guess: \n");
        scanf("%d",&choice);
        if(choice == num){
            printf("Congradulations you won!!!!\n");
            break;
        }
        else if(choice>num){
            printf("Lower!!\n");
        }
        else if(choice<num){
            printf("Higher!!\n");
        }
        i++;
    }while(i<=10);
}