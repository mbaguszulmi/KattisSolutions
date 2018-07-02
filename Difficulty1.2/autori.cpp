#include <iostream>

using namespace std;

int main(int argc, char const *argv[]) {
	string names, shortVariation;
	cin >> names;
	shortVariation = names[0];
	for (size_t i = 1; i < names.size(); i++)
	{
		if (names[i] == '-' && i+1 != names.size())
		{
			shortVariation+=names[i+1];
		}
	}
	cout << shortVariation << endl;
	return 0;
}
