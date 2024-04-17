//sorted array
#include<bits/stdc++.h>
using namespace std;
int firstOccur(int arr[],int size, int key ){
	int start = 0;
	int end = size-1;
	int mid = start + (end-start)/2;
	int ans = -1;
	while(start<=end){
		if (arr[mid] == key){
			ans = mid;
			end = mid -1;
		}
		else if (arr[mid] > key){
			end = mid -1;
		}
		else{
			start = mid+1;
		}
	    mid = start + (end-start)/2;
	}
	return ans;
}
int lastOccur(int arr[],int size, int key ){
	int start = 0;
	int end = size-1;
	int mid = start + (end-start)/2;
	int ans = -1;
	while(start<=end){
		if (arr[mid] == key){
			ans = mid;
			start = mid + 1;
		}
		else if (arr[mid] > key){
			end = mid -1;
		}
		else{
			start = mid+1;
		}
	    mid = start + (end-start)/2;
	}
	return ans;
}


int main(){
	int arr[12]= {1,3,3,3,3,3,3,5,7,11,13,19};
	int key = 3;
	pair <int,int> p;
	p.first = firstOccur(arr, 9,key);
	p.second = lastOccur(arr, 9,key);
	int total_occurance = p.second - p.first;
	cout<<total_occurance;	
	return 0;

}