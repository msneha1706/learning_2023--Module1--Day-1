#include<stdio.h>
#include<conio.h>

int main(){
	int num1;
	printf("Enter the marks :- ");
	scanf("%d",&num1);
	if(num1 >= 90){
		printf("GRADE A");
	}else if(num1 >= 75 && num1<89){
		printf("GRADE B");
	}
	else if(num1 >= 60 && num1<74){
		printf("GRADE c");
	}else if(num1 >= 50 && num1<59){
		printf("GRADE D");
	}else{
		printf("GRADE f");
	}
	
	return 0;
	
}
