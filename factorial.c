#include <stdio.h>


int main(){
	
	int result =1;
	int num;
	int i;
	printf("PLease input the number you would like to find the factorial of: ");
	scanf("%d", &num);
	
	
	for ( i =1; i<=num; ++i){
		result*=i;
	}
	
	printf("the factorial of %d is %d",num, result);
	
	
	
	return 0;
}
