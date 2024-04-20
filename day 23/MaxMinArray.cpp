#include<iostream>
using namespace std;


void maxmin(int arr[],int n){
	int maxele=arr[0];
	int minele=arr[0];

	for(int i=0;i<n;i++){
		if (arr[i]>maxele){
			maxele=arr[i];
		}
		if (arr[i]<minele){
			minele=arr[i];
		}
	}
	cout<<"Max element: "<<maxele<<endl;
	cout<<"Min element: "<<minele<<endl;
}
int main(){
	int n;
	cin>>n;
	int arr[n] ;
	for(int i =0;i<n;i++){
		cin>>arr[i];
	}
	maxmin(arr,n);

	


	return 0;
}