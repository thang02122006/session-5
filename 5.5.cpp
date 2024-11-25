#include<stdio.h>

int main(){
	int a=0;
	do{
		++a;
	for(int i=1 ; i<=10 ; i++){
		printf("%dx%d=%d\n",a,i,i*a);
	}
}while(a<10);

	return 0;
}
