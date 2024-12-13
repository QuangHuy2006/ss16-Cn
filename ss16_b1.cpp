#include <stdio.h>
void a(){
	int N=1000;
	printf("gia tri cua bien N la %d", N);
	printf("\ndia chi cua bien N la %d", &N);
	int *ptr;
	ptr=&N;
	printf("\ngia tri cua bien ptr la %d", ptr);
	printf("\ndia chi cua bien ptr la %d", *ptr);
}
int main(){
	a();
}