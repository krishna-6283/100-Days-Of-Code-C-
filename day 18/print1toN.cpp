#include<iostream>
using namespace std;

void print(int i,int n){
	if(i>n) return ;
	cout<<i<<" ";
	print(i+1,n);
}

int main(){
	int n=8;
	print(0,n);
	return 0;
}