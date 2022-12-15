//write a c programme where number is even or odd

#include<stdio.h>
int main()
{
	int num, even, odd;
	
	printf("Enter a number: \n");
	scanf("%d", &num);
	
	if(num%2==0){
		printf("number is even");
	}
	else{
		printf("number is odd");
	}
	
	return 0;
}
