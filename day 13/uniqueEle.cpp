#include<iostream>
using namespace std;

int main(){
	int n;
	cin>>n;
	int arr[100];
	for (int i=0;i<n;i++){
		cin>>arr[i];
	}

	int count=0;
	for (int i =0;i<n;i++){
		bool uniq = true;

		for(int j=i+1;j<n;j++){
			if (arr[i] == arr[j]){
				uniq = false;
				break;
			}
		}
		if (uniq){
			cout<<arr[i]<<endl;
		}
		
	}
	return 0;
}