
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
			if(i!=j&&arr[i][j]!=1)
					flag = 0;
					else if(i!=j&&arr[i][j]!=0)
					flag = 0;
		}
	}
	printf("The created matrix is: \n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d",arr[i][j]);
		}
		printf("\n");
	}
	if(flag)
	printf("It is an identity matrix\n");
	else
	printf("It is not an identity matrix\n");
	for(i=0;i<m;i++){
		for(j=0;j<n;j++){
			printf("%d",arr[j][i]);
		}
		printf("\n");
	}
	}
