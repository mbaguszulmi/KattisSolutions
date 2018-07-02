#include <iostream>

using namespace std;

int main() {
	int n, total=0;
	float num=0;
	cin >> n;
	int desc[n];
	for (int i = 0; i < n; i++)
	{
		cin >> desc[i];
	}
	
	for (int i = 0; i < n; i++)
	{
		if (desc[i] != -1)
		{
			total+=desc[i];
			num++;
		}
	}

	cout << total/num << endl;
	return 0;
}