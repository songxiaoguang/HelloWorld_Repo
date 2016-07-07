#include<stdio.h>

void add(int,int);

void minus(int,int);

int main(){
	printf("Hello World\n");
	add(3,5);
	minus(10,4);
	return 0;
}

void add(int a,int b){
	printf("%d + %d = %d\n",a,b, a + b);
}

void minus(int a,int b){
	printf("%d - %d = %d\n",a,b,a - b);
}
