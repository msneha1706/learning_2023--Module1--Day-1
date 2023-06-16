#include<stdio.h>
#include<conio.h>

void main(){
	int num1,num2;
	char ch;
	printf("Enter the First operand :- ");
	scanf("%d",&num1);
	printf("Enter the operator :- ");
	scanf(" %c", &ch);
	printf("Enter the Second operand :- ");
	scanf("%d",&num2);
	
	switch (ch) {
		case '+':
		printf("%d + %d = %d",num1,num2,num1+num2);
		break;
	
	    case '-':
		printf("%d - %d = %d",num1,num2,num1-num2);
		break;
	
		case '*':
		printf("%d * %d = %d",num1,num2,num1*num2);
		break;
	
		case '/':
		printf("%d / %d = %d",num1,num2,num1/num2);
		break;
	
		case '%':
		printf("%d % %d = %d",num1,num2,num1%num2);
		break;
	
		default:
		printf("Wrong Operator");
	}
	
	
}
