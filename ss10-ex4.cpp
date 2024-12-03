#include <stdio.h>

int main(){
	int arr[]={6,5,9,8,7,10};
	int n=sizeof(arr)/sizeof(arr[0]);
	printf("Mang truoc khi sap xep :");
	for(int i = 0 ; i < n ; i++){
		printf("%d ",arr[i]);
	}
	for (int i=0;i<n-1;i++){
		int minidx=i;
		for (int j=i+1;j<n;j++){
			if(arr[j]<arr[minidx]){
				minidx=j;
			}
		}
		if(minidx !=i){
			int temp=arr[i];
			arr[i]=arr[minidx];
			arr[minidx]=temp;
		}
	}
		printf("\nMang sau khi duoc sap xep tang dan la:");
	for(int i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}

