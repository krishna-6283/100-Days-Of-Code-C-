#include<bits/stdc++.h>
using namespace std;

int main(){
	int arr[] = {1,3,6,2,4,5,10,8,7,9};
	int n = sizeof(arr)/sizeof(arr[0]);

	//key = 11 at position 10
	// int index = 10;
	int key = 11;
	
	arr[n] = key;
	n++;
	for(int i =0;i<n;i++){
		cout<<arr[i]<<" ";
	}
	

	
	
	
	return 0;
}
