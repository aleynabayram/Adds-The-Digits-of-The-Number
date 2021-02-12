/*The code adds the digits of the number */

#include<stdio.h>

int main(){
	int number;
	int digit;
	int sum;
	
	
	printf("The number which you want to find the sum of the digits: ");
	scanf("%d",&number);
	
	if (number > 50000){
		printf("The number is larger than the code can calculate.\n");
		
	}
	else{
		while(number>0){
			digit=number%10;
			sum=sum+digit;
			number=number/10;
		}
		printf("The sum of the digits of the number: %d", sum);
	}
	return 0;		
}
