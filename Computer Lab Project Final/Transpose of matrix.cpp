//WAP in c to transpose matrix 
#include<stdio.h>
main(){
	int m,n,i,j,sum=0;
	printf("Enter the row and column of the 2d array: ");
	scanf("%d%d",&m,&n);
	int arr[m][n];
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("Enter the vlaue: ");
			scanf("%d",&arr[i][j]);
			if(i==j||i+j==m-1)
			sum = sum+arr[i][j];
		}
	}
	printf("The created matrix is: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	printf("The sum of the diagomals is : %d\n",sum);
	printf("The transpose of the matrix is: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d",arr[j][i]);
		}
		printf("\n");
	}
	}
