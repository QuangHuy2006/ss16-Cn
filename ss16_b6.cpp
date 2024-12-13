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
	int pos;
	int find=0;
	printf("\nnhap phan tu muon tim thay:");
	scanf("%d", &x);
	for(int i=0;i<n;i++){
		if(x==*(a+i)){
			pos=i;
			++find;
		}
	}
	if(find){
		printf("tim thay phan tu %d o vi tri index[%d]", x, pos);
	}else {
		printf("khong tim thay phan tu !");
	}
}
int main(){
	int a;
	int n;
	arr(&a,n);
}