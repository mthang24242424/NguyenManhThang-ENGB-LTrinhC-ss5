#include<stdio.h>
int main(){
	int operators,min,max; 
	float a,b,c,result;
	printf("nhap so a ");
	scanf("%f",&a);
	printf("nhap so b ");
	scanf("%f",&b);
	printf("nhap so c ");
	scanf("%f",&c); 
	while(operators!=6){
		printf("lua chon cua ban ");
		scanf("%d",&operators);
		switch(operators){
			case 2: 
			 result = a+b+c;
			 printf("tong 3 so la %.0f \n",result);
			 break;
			 case 3:
			 result= (a+b+c)/3;
			 printf("trung binh cong 3  so la %.3f \n",result);
			 break;
			 case 4:
			 	if(a>b){
			 		min = a;
					a = b;
					b = min; 
			 	}
				if(a>c){
					min = a; 
					a = c;
					c = min; 
				} 
				if(b>c){
					min = b; 
					b = c;
					c = min; 
				} 
				printf("so nho nhat la %.0f \n",a); 
				 break; 
			 case 5:
			 if(a>b){
			 		min = a;
					a = b;
					b = min; 
			 	}
				if(a>c){
					min = a; 
					a = c;
					c = min; 
				} 
				if(b>c){
					min = b; 
					b = c;
					c = min; 
				} 
				printf("so nho nhat la %.0f \n",c); 
				 break; 
			 case 6:
			 	printf("thoat chuong trinh ");
			 	break;
		} 
	} 
	
	return 0; 
}
