#include <bits/stdc++.h>
using namespace std;
void findmissing(int arr[], int n)
{
	for (int i = 0; i < n; i++)
	{
		int ans = arr[i] +1;
		int s = i+1;
		int e = n - 1;
		int mid = (s + e) / 2;
		while (s <= e)
		{
			if (ans == arr[mid])
			{
				cout<<"{"<<i<<","<<mid<<"}";
				cout<<"{"<<arr[i]<<","<<arr[mid]<<"}";

				cout<<endl;
			}
			if (ans < arr[mid])
			{
				e = mid - 1;
			}
			else
			{
				s = mid + 1;
			}
			mid = (s + e) / 2;
		}
	}
}


int main()
{

	int arr[100] = {-1,1,4,2,8};
	int size = ;
	int key = 10;
	findmissing(arr, size);
	
	return 0;
}