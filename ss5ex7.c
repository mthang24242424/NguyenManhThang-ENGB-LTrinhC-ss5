#include<stdio.h>
int main(){
	 int a,b,maxUoc; 
	 printf("nhap so nguyen duong thu nhat ");
	 scanf("%d",&a);
	  printf("nhap so nguyen duong thu hai ");
	 scanf("%d",&b);
	 if(a<0||b<0){
	 printf("-----------------------------\n"); 
	 printf("nhap so nguyen duong thu nhat ");
	 scanf("%d",&a);
	  printf("nhap so nguyen duong thu hai ");
	 scanf("%d",&b);
	 } 
	 for(int i=1; i<=a && i<=b ;i++){
	 	if( a % i == 0 && b % i == 0){
	 	maxUoc = i;	
		 } 
	 } 
	 printf("uoc chung lon nhat la %d",maxUoc);
	  
	return 0; 
} 
