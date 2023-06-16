#include<stdio.h>
#include<conio.h>

void main(){
	int num1,num2,num3;
	printf("Enter the first number :- ");
	scanf("%d",&num1);
	printf("Enter the Second number :- ");
	scanf("%d",&num2);
	printf("Enter the Third  number :- ");
	scanf("%d",&num3);
	
	if(num1>num2 && num1>num3){
		printf("%d is greater",num1);
	}else if(num3>num2 && num3>num1){
		printf("%d is greater",num3);
	}
	else{
		printf("%d is greater",num2);	
	}
}
