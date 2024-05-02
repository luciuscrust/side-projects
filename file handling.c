#include <stdio.h>
FILE* fptr;

int main(){
    FILE* fptr;
    fptr = fopen("text.txt", "w");
    
    fputs("c prgramming is a beautiful language\n",fptr);
    fputs("i love using c programing",fptr);
    
    fclose(fptr);
    char content[10000];
    fptr = fopen("text.txt", "r");
    
    if(fptr != NULL){
        while(fgets(content, 10000, fptr)){
            printf("%s",content);
        }
    }
    else{
        printf("file open unsuccessfull!!!");
    }

    
    fclose(fptr);
 return 0;
}