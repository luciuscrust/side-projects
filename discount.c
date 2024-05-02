#include <stdio.h>


int main(){
	
	double  discount, f_disc,f_price;
	int price, i=0;
	int amt;
	printf("Please input the amount of items being purchased: ");
	scanf("%d", &amt);
	int prices[amt];
	
	int u;
	for (u=0;u<amt;u++){
	
	printf("Please input the price of the item: ");
	scanf("Price[u] = %lf",&prices[u]);
	
	if (prices[u] >= 3000){
	
	printf("Please input the amount of discount you would like to apply: ");
	scanf("%lf", &discount);
	
	int disc = discount/100;
	f_disc = price * disc;
	f_price = price - f_disc; 
	
	
}
	++i;
	if(prices[u] <=0){
		break;
}

		
	}
	
	int x;

	for (x=0;x<amt;x++){
		printf("Price[%d] =  \n",x);
}
	

	return 0;
}

