#include <stdio.h>
void change(int *a, int *b){
	int temp=*a;
	*a=*b;
	*b=temp;
}
int main(){
	int x,y;
	scanf("%d%d", &x, &y);
	printf("gia tri cua a truoc khi doi cho la: %d", x);
	printf("\ngia tri cua b truoc khi doi cho la %d", y);
	change(&x,&y);
	printf("\ngia tri cua a la: %d", x);
	printf("\ngia tri cua b la %d", y);
	return 0;
}