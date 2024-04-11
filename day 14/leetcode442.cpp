#include<bits/stdc++.h>
using namespace std;
vector<int> findDuplicates(vector<int>& nums) {
        int size = nums.size();
        sort(nums.begin(), nums.end());
        vector<int> ans;
        for(int i =0;i<size-1;i++){
            if (nums[i] == nums[i+1]){
                ans.push_back(nums[i]);
            }
        }
        return ans;
}

int main(){

	int n;
	cin>>n;
	vector<int> nums;
	int temp;
	for (int i =0;i<n;i++){
		cin>>temp;
		nums.push_back(temp);
	}
	vector<int> ans = findDuplicates(nums);
	for(auto i:ans){
		cout<<i<<" ";
	}

	return 0;
}