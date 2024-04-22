#include <iostream>
using namespace std;

int main()
{
	int n;
	cout << "Enter amount: ";
	cin >> n;
	int n500 = 0;
	int n100 = 0;
	int n50 = 0;
	int n10 = 0;
	int n1 = 0;
	while (n > 0)
	{
		if (n >= 500)
		{
			n = n - 500;
			n500++;
		}
		else if (n >= 100)
		{
			n = n - 100;
			n100++;
		}
		else if (n >= 50)
		{
			n = n - 50;
			n50++;
		}

		else if (n >= 10)
		{
			n = n - 10;
			n10++;
		}
		else
		{
			n = n - 1;
			n1++;
		}
		
	}
	cout << "500 notes: " << n500 << endl;
	cout << "100 notes: " << n100 << endl;
	cout << "50 notes: " << n50 << endl;
	cout << "10 notes: " << n10 << endl;
	cout << "1 notes: " << n1 << endl;

	return 0;
}