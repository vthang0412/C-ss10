#include<stdio.h>

int main(){
	int arr[] = {1,6,2,4,5,7,3};
	int input;
	int index[100] , count = 0 ;
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("Nhap gia tri muon tim : ");
	scanf("%d",&input);
	for(int i = 0 ; i < n ; i++){
		if(input == arr[i]){
			index[count] = i;
			count++;
		}
	}
	if(count > 0){
		printf("Gia tri can tim na o vi tri : ");
		for(int i = 0 ; i < count ; i++){
			printf("%d ",index[i]);
		}
	}else{
		printf("Gia tri can tim khong nam o trong mang");
	}
	return 0;
}
