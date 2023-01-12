//ARMSTRONG
#include<stdio.h>
int main(){
	int n,rem,c,sum=0,temp;
	printf("Enter a num to check armstrong or not: ");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		rem=n%10;
		c=rem*rem*rem;
		sum=sum+c;
		n=n/10;
	}
	n=temp;
	if(n==sum){
		printf("ARMSTRONG");
	}
	else{
		printf("NOT A ARMSTRONG");
	}
}
