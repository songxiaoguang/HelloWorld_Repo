#include<stdio.h>

void add(int,int);

void minus(int,int);

void compare(int a,int b){
	if (a > b)
		printf("%d > %d\n",a,b);
	else
		printf("%d < %d\n",a,b);
}

int main(){
	printf("Hello World\n");
	add(3,5);
	minus(10,4);
	compare(15,9);
	return 0;
}

void add(int a,int b){
	printf("%d + %d = %d\n",a,b, a + b);
}

void minus(int a,int b){
	printf("%d - %d = %d\n",a,b,a - b);
}
