#include<iostream>
using namespace std;
void reverse(string &name, int s,int size){
	if(s==size) return ;

	swap(name[s],name[size-1-s]);
	s++;
	reverse(name,s,size-1-s);


}
int main(){
	string name="krishna";
	int size=7;
	reverse(name,0,size-1);
	cout<<name;
	return 0;
}