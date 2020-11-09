#include <iostream>
#include <Windows.h>
#include <string>

using namespace std;
int main(void) {
	int i = 1;
	int s = 0;

	/*while (i <= 100) {
		s += i;
		i++;
	}

	do {
		s += i;
		i++;
	} while (i <= 100);*/

	for (int i = 1; i <= 100; i++) {
		s += i;
	}

	cout << s << endl;
	system("pause");
	return 0;

}