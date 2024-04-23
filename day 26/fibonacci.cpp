#include<iostream>
using namespace std;

int fiblast(int n){
	if (n==1) return 0;
	if (n==2) return 1;
	int a =0;
	int b =1;
	int c = a+b;
	for (int i =3;i<=n;i++){
		c=a+b;
		a=b;
		b=c;
		
	}
	return c;
}
int main(){

	int n;
	cin>>n;
	int last = fiblast(n);
	cout<<last;

	return 0;
}