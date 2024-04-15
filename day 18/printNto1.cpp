#include<iostream>
using namespace std;

void print(int i,int n){
	if(n<i) return;

	cout<<n<<" ";
	print(0,n-1);

}

int main(){
	int n=8;
	print(0,n);
	return 0;
}