#include<stdio.h>

int main(){
	int n,T;
	printf("nhap so nguyen n : ");
	scanf("%d", &n);
	

	for(int i=1 ; i<=n ; i++){
		T+=i;
		if(i==n){	
			printf("tong la %d",T);
		}
	}
	
	return 0;
	
}
