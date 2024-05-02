#include  <stdio.h>


int main(){
	
	int number;
	printf("Please input number:  ");
	scanf("%d", &number);
	
	int count = 1;
	
	while (count<=12){
		int product = count * number;
		printf("%d x %d = %d\n",count, number, product);
		count = count +1;
	}
	
	
	printf("\n\nthis is from the do while \n\n\n");
	int num;
	printf("input num:  ");
	scanf("%d", &num);
	
	int num1 = 1;
	
	do{
		int produce = num1*num;
		printf("%d x %d = %d\n", num1, num, produce);
		num1 = num1 + 1;
	}while (num1<=12);
	
	printf("\n\nprint from 12 - 1\n\n");
	
	int dig;
	printf("input the number:  ");
	scanf("%d", &dig);
	
	int dig1 = 12;
	
	while(dig1>=1){
		int dig2 = dig1 * dig;
		printf("%d x %d = %d\n",dig1, dig, dig2);
		dig1 = dig1 - 1;
	}
	return 0;
}
