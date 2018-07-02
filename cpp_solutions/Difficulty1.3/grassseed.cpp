#include <iostream>
#include <iomanip>

using namespace std;

int main() {
	double cost, w, l, total = 0;
	int lawns;
	cin >> cost;
	cin >> lawns;
	for (int i = 0; i < lawns; i++)
	{
		cin >> w >> l;
		total+=w*l*cost;
	}
	cout << fixed << setprecision(7) << total << endl;
	return 0;
}