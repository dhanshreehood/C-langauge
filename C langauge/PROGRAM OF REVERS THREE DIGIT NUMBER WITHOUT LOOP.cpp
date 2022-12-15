#include<stdio.h>
		
	//PROGRAM OF REVERS THREE DIGIT NUMBER WITHOUT LOOP
	int main()
	{
		int num, temp;

		printf("ENTER THE THREE DIGIT NUMBER:- ");
		scanf("%d",&num);
		
		printf("AFTER REVERSE RESULT IS:- ");
		temp = num%10;
		printf("%d",temp); 
		
		temp = num/10;
		temp = temp%10;
		printf("%d",temp);
		
		temp = num/10;
		temp = temp/10;
		printf("%d",temp);
	 retur0;
	}
