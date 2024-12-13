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
	printf("\nnhap vi tri muon xoa:");
	scanf("%d", &x);
	--x;
	for(int i=x;i<n;i++){
		*(a+i)=*(a+i+1);
	}
	if(x>n){
	printf("khong co vi tri nay trong mang");
}else {
	printf("mang sau khi thay doi la:");
	for(int i=0;i<n-1;i++){
		printf("%d ", *(a+i));
	}
}
}
int main(){
	int a={0};
	int n;
	arr(&a,n);
}