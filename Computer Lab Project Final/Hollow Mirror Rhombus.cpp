//Program To Print Rhombus Star Pattern
#include<stdio.h>
int main(){
	int i,j,n,k;
	printf("Enter no. of rows: ");		//Taking Size Of Rows
	scanf("%d",&n);
	for(i=1;i<=n;i++){			//For Rows 
		for(j=i;j<n;j++){		//For Columns
			printf(" ");
		}
		for(k=1;k<=5;k++){
			if(i==1||i==n||k==1||k==n){
			printf("*");
		}
		else{
			printf(" ");
		}
			printf("\n");
	}}
}
