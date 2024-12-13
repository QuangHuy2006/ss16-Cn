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
	printf("\nnhap vi tri muon sua:");
	scanf("%d", &x);
	--x;
	int value;
		printf("\nnhap gia tri muon sua:");
		scanf("%d", &value);
	if(x>n){
		printf("khong co vi tri nay trong mang !");
	}else{
		a[x]=value;
	}
	printf("cac phan tu trong mang la:");
	for(int i=0;i<n;i++){
		printf("%d ", *(a+i));
	}
}
int main(){
	int a;
	int n;
	arr(&a,n);
}