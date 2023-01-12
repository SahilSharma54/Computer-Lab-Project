//CALCULATOR 
#include<stdio.h>
int main(){
	int a,b,c;
	printf("Press 1for add\n Press 2 for subtraction\n Press 3 for multiplication");
	scanf("%d",&c);
	if(c==1){
		printf("Enter first num: ");
		scanf("%d",&a);
		printf("Enter second num: ");
		scanf("%d",&b);
		printf("The addition od %d and %d is: %d",a,b,a+b);
	}
	else if(c==2){
		printf("Enter first num: ");
		scanf("%d",&a);
		printf("Enter second num: ");
		scanf("%d",&b);
		printf("The subtraction of %d and %d is: %d",a,b,b-a);		
	}
	else{
		printf("Enter first num: ");	
		scanf("%d",&a);
		printf("Enter second num: ");
		scanf("%d",&b);
		printf("The multiplication of %d and %d is: %d ",a,b,a*b);	
	}
}
