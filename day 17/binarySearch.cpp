#include<iostream>
using namespace std;
void print(int arr[],int s,int e){
	for(int i=s;i<=e;i++){
		cout<<arr[i]<<" ";
	}cout<<endl;
}
bool binarySearch(int *arr,int s,int e,int ele){
	int mid=s + (e-s)/2;
	if(s>e) return false;
	print(arr,s,e);
	cout<<"Mid value = "<<arr[mid]<<endl;

	if(arr[mid]==ele) return true;

	else if(arr[mid] < ele){
		return binarySearch(arr,mid+1,e,ele);
	}
	else{
		return binarySearch(arr,s,mid-1,ele);
	}
	
}

int main(){
	int arr[9]={2,5,6,8,9,11,14,17,19};
	bool ans=binarySearch(arr,0,8,8);
	cout<< ans;
	return 0;
}