#include<stdio.h>
#include<conio.h>

void main(){
	int name,roll_no,phy,che,math;
	printf("Enter the Roll No :- ");
	scanf("%d",&roll_no);
	printf("Enter the physics number :- ");
	scanf("%d",&phy);
	printf("Enter the Chemistery number :- ");
	scanf("%d",&che);
	printf("Enter the Math number :- ");
	scanf("%d",&math);
	
	int total = phy+che+math;
	printf("total = %d\n",phy+che+math);
	printf("percent = %d \n",total/100);
	printf("%d get \n%d in phy \n%d in che and \n%d in math\n",roll_no,phy,che,math);
	printf("Total no get by %d is %d",roll_no,total);
	
}
