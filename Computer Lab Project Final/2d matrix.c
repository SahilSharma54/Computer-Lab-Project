# include<stdio.h>
void main(){
    int m,n,i,j;
    printf("enter the number of row and column:> ");
    scanf("%d%d",&m,&n);
    int a[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            printf("enter the value:> ");
            scanf("%d",&a[i][j]);
        }
    }
    printf("the created matrix is:> \n");
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
                printf("%d ",a[i][j]);
        }
        printf("\n");
    }

}
		
