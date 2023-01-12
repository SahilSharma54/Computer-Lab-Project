/*WAP in c to find the avrage of five student peramitrised function*/
#include<stdio.h>
float avg(float sum, int n){
	return (sum)/n;
}
 main(){
	float m, sum=0;int n,i;
	printf("Enter the number of students: ");
	scanf("%d",&n);
	for(i=1;i<=n;i++){
		printf("Enter the marks: ");
		scanf("%f",&m);
		sum+=m;
	}
	printf("The avrage of the student is: %0.2f\n",avg(sum,n));
}
