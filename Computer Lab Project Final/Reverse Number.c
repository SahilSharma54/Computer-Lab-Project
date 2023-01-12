//REVERSE NO
#include<stdio.h>
int main(){
	int n,temp,rem,sum=0;
	printf("Enter a no to find its REVERSE NO.: ");
	scanf("%d",&n);
	temp=n;
	while(n>0){
		rem=n%10;
		sum=(sum*10)+rem;
		n=n/10;
	}
	printf("The reverse vof given no. is: %d",sum);
	
	

}
