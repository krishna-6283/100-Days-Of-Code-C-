#include<bits/stdc++.h>
using namespace std;

int main(){


	vector<int> vec;
	int n;
	cin>>n;
	int temp;
	for (int i =0;i<n;i++){
		cin>>temp;
		vec.push_back(temp);
	}
	int m = *max_element(vec.begin(), vec.end());
	cout<<m;
	
	return 0;
}
// int s = 0;
//     int e = arr.size()-1;

//     int mid = s + (e-s)/2;
//     while(s<e){
//         if(arr[mid] < arr[mid+1]){
//             s = mid +1;
//         }
//         else{
//             e = mid;
//         }
//         mid = s + (e-s)/2;
//     }
//     return s;
// }
