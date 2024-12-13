#include <stdio.h>
void arr(int *a,int n){
	printf("nhap so phan tu co trong mang:");
	scanf("%d", &n);
	printf("nhap cac phan tu trong mang:");
	for(int i=0;i<n;i++){
		scanf("%d", &*(a+i));
	}
	printf("cac phan tu trong mang la:");
	for(int i=0;i<n;i++){
		printf("%d ", *(a+i));
	}
	int x;
	printf("\nnhap vi tri muon them:");
	scanf("%d", &x);
	int value;
		printf("\nnhap gia tri muon them:");
		scanf("%d", &value);
	for(int i=n;i>=x;i--){
		*(a+i)=*(a+i-1);
	}
	*(a+x-1)=value;
	if(x>n){
	printf("cac phan tu trong mang la:");
	for(int i=0;i<x;i++){
		printf("%d ", *(a+i));
	}
}else {
	for(int i=0;i<n+1;i++){
		printf("%d ", *(a+i));
	}
}
}
int main(){
	int a={0};
	int n;
	arr(&a,n);
}