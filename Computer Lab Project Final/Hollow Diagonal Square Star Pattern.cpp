//Program To Print Hollow Diagonal Square Star Pattern
#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter no. of rows: ");		//Taking Size Of Rows
	scanf("%d",&n);
	for(i=1;i<=n;i++){			//For Rows 
		for(j=1;j<=n;j++){		//For Columns
		if(i==1 || i==n || j==1 || j==n || i==j || j==n+i-1){
			printf("*");
		}
		else{
			printf(" ");
		}
	}
	printf("\n");
}
}
