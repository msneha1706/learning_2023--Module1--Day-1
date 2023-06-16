#include<stdio.h>
#include<conio.h>

void main(){
	int num1,num2;
	printf("Enter the first number :- ");
	scanf("%d",&num1);
	printf("Enter the Second number :- ");
	scanf("%d",&num2);
	
	(num1 > num2) ? printf("%d is greater",num1) : printf("%d is greater",num2);
}
