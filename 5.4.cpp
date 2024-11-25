#include <stdio.h>

int main(){
	int a,b;
	do{
	printf("Nhap bang cuu chuong: ");
	scanf("%d", &b);
	}while(b<1 || b>10);
	for(a=1; a<=10; a++){
		printf("%d x %d = %d\n", b, a, a*b);
	}
	
	return 0;
}
