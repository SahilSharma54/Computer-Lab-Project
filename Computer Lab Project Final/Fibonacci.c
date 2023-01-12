//FABINACCO SERIES 
#include <stdio.h>
int main(){
	int n,i,c=0,b=1,a=0;
	printf("Enter a limit to find Fibonacci series: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("%d\n",a);
			c=a+b;
			a=b;
			b=c;
	}
}
