#include<stdio.h>
int main(){
	// khai bao bien a va yc nhap vao so tu 1 den 10
	int a;
	printf("nhap so nguyen duong tu 1 den 10: ");
	scanf("%d",&a);
	// neu so ko tm yeu cau nhap lai
	while(a<0||a>10){
	
		printf("nhap so nguyen duong tu 1 den 10: ");
		scanf("%d",&a);
	}
	//vong lap in len bcc
	for(int i=1;i<11;i++){
		printf("%d nhan %d bang %d \n",a,i,a*i);
	}
	return 0;		
	}
	

