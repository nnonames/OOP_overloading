#include "display.h"

namespace Display {
	PrtNum::PrtNum() { }
	PrtNum::~PrtNum() { }

	PrtStr::PrtStr() { }
	PrtStr::~PrtStr() { }

	PrtNumStr::PrtNumStr() { }
	PrtNumStr::~PrtNumStr() { }

	PrtStr::PrtStr(string str1, string str2) {
		cout << str1 << str2 << endl;
	}

	void PrtStr::PrtTwoStr(int arr1[], int arr2[], int arrcount, string str) {
		for (int i = 0; ;) {
			if (arrcount == i) { break; }
			cout << str << "arr1[" << i << "] = ";
			cout << arr1[i] << "\t\tarr2[" << i << "] = " << arr2[i] << endl;
			i = i + 1;
		}
	}

	PrtNumStr::PrtNumStr(string str, int count) {
		for (int i = 0; ;) {
			if (count == i) { break; }
			cout << str << endl;
			i = i + 1;
		}
	}

	PrtNum::PrtNum(int x, int y) {
		cout << x * y << endl;
	}
}