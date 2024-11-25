#include<stdio.h>
int main(){
	int a;
	int sum=0;
	printf("moi ban nhap so nguyen duong a ");
	scanf("%d",&a);
	while(a<0){
		printf("moi ban nhap so nguyen duong ");
		scanf("%d",&a);
	}
	for(int i=0;i<=a;i++){
		
		sum+=i;
	}
	printf("tong phep tinh tu 1 den a la %d ",sum);
	return 0;
}
