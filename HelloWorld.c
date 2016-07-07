#include<stdio.h>

void add(int,int);

int main(){
	printf("Hello World\n");
	add(3,5);
	return 1;
}

void add(int a,int b){
	printf("%d + %d = %d\n",a,b, a + b);
}
