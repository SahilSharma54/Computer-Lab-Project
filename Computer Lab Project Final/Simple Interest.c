//SIMPLE INTEREST

#include<stdio.h>
int main(){
	int t,p;
	float SI,r;
	printf("Enter the time: ");
	scanf("%d",&t);
	printf("Enter the rate: ");
	scanf("%f",&r);
	printf("Enter the principle: ");
	scanf("%d",&p);
	SI=(p*r*t)/100;
	printf("The Simple Interest of the given data is:%f ",SI);
}

