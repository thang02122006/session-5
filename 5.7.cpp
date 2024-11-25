#include<stdio.h>

int main(){
	int a,b,ucln;
	printf("moi ban nhap so nguyen a= ");
	scanf("%d",&a);
	printf("moi ban nhap so nguyen b= ");
	scanf("%d",&b);
	for(int i=1 ; i<=a || i<=b ; i++){
		if(a%i==0 && b%i==0){
		 	ucln=i;
		}
	}
		printf("%d",ucln);
	
	return 0;
}
