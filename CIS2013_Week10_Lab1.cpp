#include <iostream>
#include <cstring>
using namespace std;

int main() {
	char stay;
	int len;

		cout << "How long do you want your array?" << endl;
		cin >> len;

		int *a;
		a = new int[len];

		for (int x = 0; x < len; x++) {
			cout << "Int number " << x << " should be: ";
			cin >> a[x];
		}

		cout << endl << "Your list of numbers is: " << endl;

		for (int x = 0; x < len; x++) {
			cout << a[x] << endl;
		}


		delete[] a;
	
	cin >> stay;
	return 0;

}
