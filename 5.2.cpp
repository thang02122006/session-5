#include<stdio.h>

int main(){
	int a;
	while(1){
		printf("nhap so nguyen a : ");
		scanf("%d",&a);
		if(a==6){
			goto end;
		}
		else{
			printf("moi ban nhap lai ");
		}
	}
	end:
	return 0;
} 

