#include<iostream>
using namespace std;

int main(){


	int n;
	cin>>n;
	int arr[n];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key ;
	cin>>key;
	int s = 0;
	int e = n-1;
	for (;s<=e;){
		int mid = s + (e-s)/2;
		if(arr[mid]==key){
			cout<<mid;
			break;
		}
		else if (arr[mid] > key){
			e = mid -1;
		}
		else{
			s = mid+1;
		}

	}
	return 0;
}