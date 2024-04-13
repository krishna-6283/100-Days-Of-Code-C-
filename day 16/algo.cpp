#include<bits/stdc++.h>
using namespace std;

int main(){
	vector<int> vec = {1,2,4,5,8};
	int n = vec.size();
	for (auto i:vec){
		cout<<i<<" ";
	}cout<<endl;
	int s=0;
	int e = vec.size()-1;

	while(s<=e){
		swap(vec[s], vec[e]);
		s++;
		e--;
	}
	for (int i =0;i<n;i++){
		cout<<vec[i]<<" ";
	}

	return 0;
}