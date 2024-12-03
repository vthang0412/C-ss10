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
	return 0;
}

