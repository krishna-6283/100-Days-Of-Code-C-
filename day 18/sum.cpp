#include<iostream>
using namespace std;

int sumArray(int arr[],int size){
	if(size==0){
		return 0;
	}
	return arr[0] + sumArray(arr + 1, size - 1);

}

int main(){	
	int arr[5]={3,2,5,1,6};
	int size=5;
	int sum=0;

	int ans=sumArray(arr,size);

	cout<<ans;	

	return 0;
}