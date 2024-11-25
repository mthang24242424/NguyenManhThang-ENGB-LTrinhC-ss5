#include<stdio.h>
int main(){
	int operators; 
	float a,b,result;
	printf("nhap so a ");
	scanf("%f",&a);
	printf("nhap so b ");
	scanf("%f",&b);
	while(operators!=5){
		printf("chon phep tinh ban muon ");
		scanf("%d",&operators);
		switch(operators){
			case 1:
			 result = a+b;
			 printf("tong 2 so la %.0f \n",result);
			 break;
			 case 2:
			 result= a-b;
			 printf("hieu 2 so la %.0f \n",result);
			 break;
			 case 3:
			 result = a*b;
			 printf("tich 2 so la %.0f \n",result);
			 break;
			 case 4:
			 result = a/b; 
			 printf("thuong 2 so la %.3f \n",result);
			 break;
			 case 5:
			 	printf("thoat chuong trinh ");
			 	break;
		} 
	} 
	
	return 0; 
} 
