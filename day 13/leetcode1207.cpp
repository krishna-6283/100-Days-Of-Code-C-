#include<bits/stdc++.h>
using namespace std;

bool uniqueOccurrences(vector<int>& arr) {
      vector<int> final;
      int size = arr.size();
      sort(arr.begin(), arr.end());
      int i =0;
      while(i<size){
          int count =1;
          for(int j=i+1;j<size;j++){
              if (arr[i] == arr[j]){
                  count++;
              }
              else{
                  break;
              }
          }
          final.push_back(count);
          i = i+count;
      }  
      size = final.size();
      sort(final.begin(), final.end());

      for (int i=0;i<size-1;i++ ){
          if (final[i] == final[i+1]){
              return false;
          }
      }
      return true;

    }

int main(){
	int n;
	cin>>n;
	vector <int> arr;
	int temp;
	for (int i =0;i<n;i++){
		cin>>temp;
		arr.push_back(temp);
	}
	bool ans = uniqueOccurrences(arr);
	cout<<ans;
	return 0;
}