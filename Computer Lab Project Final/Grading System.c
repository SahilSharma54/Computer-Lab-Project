//GRADING SYSTEM 
#include <stdio.h>
int main(){
	int eng,hindi,maths,sst,science,p;
	printf("Enter the marks of eng: ");
	scanf("%d",&eng);
	printf("Enter the marks of hindi: ");
	scanf("%d",&hindi);
	printf("Enter the marks of maths: ");
	scanf("%d",&maths);
	printf("Enter the marks of sst: ");
	scanf("%d",&sst);
	printf("Enter the marks of science: ");
	scanf("%d",&science);
	p=(eng+hindi+maths+sst+science)/5;
	if(p>=90 && p<=100){
		printf("GRADE A");}
	else if(p>=80 && p<=90){
		printf("GRADE B");}
	else if(p>=60 && p<=80){
	    printf("GRADE C");}
	else if(p>=40 && p<=60){
	    printf("GRADE D");}
	else if(p>=27 && p<=40){
	    printf("GRADE E");}
	else{
		printf("You are FAIL");
	}

}

