#include <stdio.h>

int main(){
	int arr[]={6,5,9,8,7,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("Mang truoc khi sap xep :");
	for(int i = 0 ; i < n ; i++){
		printf("%d ",arr[i]);
	}
	for (int i=0;i<n;i++){
		int key = arr[i];
		int j = i - 1;
		while(j >= 0 && arr[j] > key){
			arr[j+1] = arr[j];
			j = j - 1; 
		}
		arr[j+1] = key;
	}
	printf("\nMang sau khi duoc sap xep tang dan la:");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	int input;
	printf("\nNhap gia tri muon tim : ");
	scanf("%d",&input);
	int l = 0 ; 
	int r = n - 1;
	int found = 0;
	while(l <= r){
		int m = (l + r) / 2;
		if(arr[m] == input){
			printf("Gia tri can tim nam o vi tri : ");
			int i = m;
			while(i >= 0 && arr[i] == input){
				printf("%d \t",i);
				i--;
			};
			i = m + 1;
			while(i < n && arr[i] == input){
				printf("%d \t",i);
				i++;
			};
			printf("\n");
			found = 1;
			break;
		}else if(arr[m] < input){
			l = m + 1;
		}else{
			r = m - 1;
		}
	}
	if(!found){
		printf("Khong co gia tri can tim trong mang");
	}
	return 0;
}

