#include<stdio.h>
int main(){
	int num;
	printf("nhap so nguyen bat ki ");
	scanf("%d",&num);
	while(num>0){
		int charactor=num%10;
		printf("%d \n ", charactor);
		num=num/10;
	}

return 0;
}
