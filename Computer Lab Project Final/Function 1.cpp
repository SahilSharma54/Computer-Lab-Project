/*Function without Return value without Parameters*/
#include<stdio.h>
void sum();
int main()
{
	sum();
	
	return 0;
}
void sum()
	{
	int num1,num2,sum=0;
	
	printf("Enter the first value");
	scanf("%d",&num1);
	printf("Enter the second value");
	scanf("%d",&num2);
	
	sum=num1+num2;
	
	printf("%d",sum);
    }

