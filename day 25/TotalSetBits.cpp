#include<iostream>
using namespace std;


int setBits(int a, int b){
	int count=0;
	while(a!=0){
		int bit = a&1;
		if(bit==1){
			count++;
		}
		a=a>>1;
	}
	while(b!=0){
		int bit = b&1;
		if(bit==1){
			count++;
		}
		b=b>>1;
	}
	return count;

}
int main(){

	int a,b;
	cin>>a;
	cin>>b;
	int ans = setBits(a,b);
	cout<<ans;
	return 0;
}