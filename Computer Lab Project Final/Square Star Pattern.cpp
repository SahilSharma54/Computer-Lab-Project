//Program To Print Square Star Pattern
#include<stdio.h>
int main(){
	int i,j,n;
	printf("Enter no. of rows: ");		//Taking Size Of Rows
	scanf("%d",&n);
	for(i=1;i<=n;i++){			//For Rows 
		for(j=1;j<=n;j++){		//For Columns
			printf("* ");
		}
		printf("\n");			//For Next Line
	}
	return 0;
}
