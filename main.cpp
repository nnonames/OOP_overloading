#include "main.h"

int main() {

	Swap::SwapInt *pSint = new Swap::SwapInt();
	Swap::SwapChar *pSchar = new Swap::SwapChar();
	Swap::SwapArr *pSArr = new Swap::SwapArr();
	Display::PrtStr *pPstr = new Display::PrtStr();
	Display::PrtStr Pstr;

	int i = 22, j = 11, arrcount = 0;
	char c1 = 'A', c2 = 'B';
	int *arr1, *arr2;

	cout << "배열의 갯수를 지정하세요... >> : ";
	cin >> arrcount;

	arr1 = (int *)malloc(sizeof(int) * arrcount);
	arr2 = (int *)malloc(sizeof(int) * arrcount);

	for (int k = 0; ;) {
		if (k == arrcount) {
			arr1[k + 1] = arr2[k + 1] = '\0';
			break;
		}
		arr1[k] = -k;
		arr2[k] = k;
		k = k + 1;
	}

	for (int k = 0; ;) {
		if (arr1[k] == '\0') { break; }
		cout << ""
		cin >> arr1[k];
		k = k + 1;
	}
	cout << "만들어진 배열의 원소 수 >> : " << arrcount << endl;

	cout << "Before : " << i << j << endl;
	pSint->SwapInt::SwapInt(i, j);
	cout << "After : " << i << j << endl << endl;

	cout << "Before : " << c1 << c2 << endl;
	pSchar->SwapChar::SwapChar(c1, c2);
	cout << "After : " << c1 << c2 << endl << endl;

	Pstr.PrtTwoStr(arr1, arr2, arrcount, "Before : ");
	pPstr->PrtTwoStr(arr1, arr2, arrcount, "Before : ");
	pSArr->SwapArr::SwapArr(arr1, arr2, arrcount);
	pPstr->PrtTwoStr(arr1, arr2, arrcount, "After : ");

	free(arr2);
	free(arr1);

	delete pSint, pSchar, pSArr, pPstr;
	return 0;
}