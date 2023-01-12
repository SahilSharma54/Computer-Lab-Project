//W A P in c to creat the 2d array and display its contant//
#include<stdio.h>
main(){
int m,n,i,j;
printf("Enter the row and column of the 2d array: ");
scanf("%d%d",&n,&n);
int arr[m][n];
for(i=0;i<m;i++){
	for(j=0;j<n;j++){
		printf("Enter the value: ");
		scanf("%d",&arr[i][j]);
	}
}
printf("The created matrix is: \n");
for(i=0;i<n;i++){
	for(j=0;j<n;j++){
		printf("%d",arr[i][j]);
		
	}
	printf("\n");
}
}
