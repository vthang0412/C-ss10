#include <stdio.h>

int main(){
	int arr[]={3,6,1,2,5,4};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("Mang truoc khi sap xep :");
	for(int i = 0 ; i < n ; i++){
		printf("%d ",arr[i]);
	}
	for (int i=0;i<n;i++){
		for (int j=0;j<n-i-1;j++){
			if(arr[j]>arr[j+1]){
				int temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\nMang sau khi duoc sap xep tang dan la:");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

