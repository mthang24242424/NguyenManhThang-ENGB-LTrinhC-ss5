#include<stdio.h>
int main(){
	 int a,b,maxUoc,minBoi; 
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
	 minBoi = (a*b)/maxUoc; 
	 printf("boi chung nho nhat la %d",minBoi);
	  
	return 0; 
} 
