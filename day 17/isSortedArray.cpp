#include<iostream>
using namespace std;

bool isSorted(int arr[],int size){
	if(size==0 || size==1) return true;

	if(arr[0] > arr[1]){
		return false;
	}
	else{
		bool sol=isSorted(arr+1,size-1);
		return sol;
	}

}


int main(){
	int arr[5] ={2,3,5,11,9};
	int size=5;
	bool ans=isSorted(arr,size);
	if(ans) cout<<"Sorted";
	else cout<<"Not sorted";
}