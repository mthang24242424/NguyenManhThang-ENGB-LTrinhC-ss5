#include<stdio.h>
int main(){
	int a; 
	for(a=1;a<10;a++){
		printf("------------------------------"); 
		printf("bang cuu chuong %d \n",a);
		 for(int i=1;i<11;i++){
		printf("%d nhan %d bang %d \n",a,i,a*i);
	}
	}

	return 0;
}
