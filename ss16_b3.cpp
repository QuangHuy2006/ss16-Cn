#include <stdio.h>
int sum(int *a, int *b){
	return *a+*b;
}
int main(){
	int x,y;
	scanf("%d%d", &x, &y);
	int kq=sum(&x,&y);
	printf("tong cua %d va %d la %d", x,y,kq);
}