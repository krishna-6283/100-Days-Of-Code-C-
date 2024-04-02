class Solution {
public:
    bool isPalindrome(int x) {
    if (x<0) return false;
    if (x==0) return true;
    vector<int> ans;
	while(x!=0){
		int rem = x%10;
		ans.push_back(rem);
		x=x/10;
	}
	vector<int> ans2 = ans;

	
	reverse(ans.begin(), ans.end());
	bool final = true;
	int size = ans.size();
	for (int i =0;i<size-1;i++){
		if (ans2[i] != ans[i]){
			final = false;
		}
	}
    if(final){
        return true;
    }
    else{
	    return false;

    }

        
    }
};