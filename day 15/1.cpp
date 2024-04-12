#include<bits/stdc++.h>
using namespace std;

int main(){
	queue<int> q;
	q.push(12);
	q.push(12);
	q.push(12);
	q.push(12);

	cout<<"Size is: "<<q.size()<<endl;
	q.pop();
	q.pop();
	cout<<"Size is: "<<q.size()<<endl;
	cout<<"Empty? "<<q.empty()<<endl;
	cout<<"front "<<q.front()<<endl;
	return 0;
}