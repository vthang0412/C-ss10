#include <stdio.h>

int main(){
	int arr[5]={1,2,3,4,5};
	int x;
	printf("Nhap phan tu can tim:");
	scanf("%d",&x);
	int found=0;
	for (int i=0;i<5;i++){
		if (arr[i]==x){
			printf("Phan tu %d ton tai o mang vi tri:%d\n",x,i+1);
			found=1;
			break;
		}
	}
	if (!found){
		printf("Phan tu %d khong ton tai trong mang.",x);
	}
	return 0;
}

