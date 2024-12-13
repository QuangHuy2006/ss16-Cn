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
	for(int i=0;i<n;i++){
		int minpos=i;
		for(int j=i+1;j<n;j++){
		if(*(a +j)<*(a+minpos)){
			minpos=j;
			}
			int temp=*(a+i);
			*(a +i)=*(a+minpos);
			*(a+minpos)=temp;	
		}
	}
	printf("\ncac phan tu trong mang sau khi sap xep la:");
	for(int i=0;i<n;i++){
		printf("%d ", *(a+i));
	}
}
int main(){
	int a;
	int n;
	arr(&a,n);
}