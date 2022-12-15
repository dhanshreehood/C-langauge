// check whether enterd character is vowel or consolent

#include<stdio.h>
int main()
{
	char ch;
	printf("Enter character: ");
	scanf("%c", &ch);
	
	if(ch=='a'|| ch=='A' || ch=='e' || ch=='E' || ch=='i' || ch=='I' || ch=='o' || ch=='O' || ch=='u' || ch=='U'){
		printf("%c is a voval", ch);
	}
	else{
		printf("%c is a consolent", ch);
	}
	
	return 0;
}
