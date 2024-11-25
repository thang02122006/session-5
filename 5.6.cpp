#include<stdio.h>

int main(){
	float a,b,c;
	int d=0;
	int temp = 1;
	printf("Menu");
	printf("1. Tong cua hai so\n");
	printf("2. Hieu cua hai so\n");
	printf("3. Tich cua hai so\n");
	printf("4. Thuong cua hai so\n");
	printf("5. Thoat\n");
	do{
		printf("moi ban chon: ");
		scanf("%d", &d);
		switch (d){
			case 1:{
				printf("so thu nhat: ");
				scanf("%f", &a);
				printf("so thu hai: ");
				scanf("%f", &b);
				c = a + b;
				printf("%.2f+%.2ff= %.2f\n",a,b,c);
				break;
			}
			case 2:{
				printf("so thu nhat: ");
				scanf("%f", &a);
				printf("so thu hai: ");
				scanf("%f", &b);
				c = a - b;
				printf("%.2f-%.2ff= %.2f\n",a,b,c);
				break;
			}
			case 3:{
				printf("so thu nhat: ");
				scanf("%f", &a);
				printf("so thu hai: ");
				scanf("%f", &b);
				c = a * b;
				printf("%.2fx%.2ff= %.2f\n",a,b,c);
				break;
			}
			case 4:{
				printf("so thu nhat: ");
				scanf("%f", &a);
				printf("so thu hai: ");
				scanf("%f", &b);
				c = a / b;
				printf("%.2f/%.2ff= %.2f\n",a,b,c);
				break;
			}
			case 5:{
				printf("thoat");
				goto end;
			}
		}
	} while (temp=1);
	end:
	return 0; 
} 
