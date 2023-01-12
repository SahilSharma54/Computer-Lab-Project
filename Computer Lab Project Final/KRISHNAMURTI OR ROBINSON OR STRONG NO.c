//KRISHNAMURTI OR ROBINSON OR STRONG NO.
#include<stdio.h>
int main(){
	int n,temp,rem,sum=0,fact;
	printf("Enter a no. to check KM or not: ");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		rem=n%10;
		fact=1;
		while(rem>0){
			fact=fact*rem;
			rem--;
		}
		sum=sum+fact;
		n=n/10;	
	}
	if(temp==sum){
		printf("KM");
	}
	else{
		printf("NOT KM	");
	}
	
}
