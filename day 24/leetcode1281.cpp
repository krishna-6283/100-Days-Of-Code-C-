#include<iostream>
using namespace std;

int subtractProductAndSum(int n) {
        int pro = 1;
        int sum =0;
        int rem =0;
        while(n>0){
            rem = n%10;
            sum+=rem;
            pro*=rem;
            n=n/10;
        }
        int result = pro - sum;
        return result;
    }

int main(){

	int n;
	cin>>n;
	int result = subtractProductAndSum(n);
    cout << "Result: " << result << endl;
	
	return 0;
}