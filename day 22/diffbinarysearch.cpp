#include <bits/stdc++.h>
using namespace std;
pair<int,int> findpair(int arr[], int n, int key)
{
	for (int i = 0; i < n; i++)
	{
		int ans = arr[i] + key;
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

	int arr[100] = {1, 3, 4, 6, 8, 10, 16, 20, 28, 80};
	int size = 10;
	int key = 10;
	findpair(arr, size, 10);
	
	return 0;
}