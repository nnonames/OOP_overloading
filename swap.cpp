#pragma once

#include "swap.h"
#include <iostream>

using namespace std;

namespace Swap {
	SwapInt::SwapInt() { }
	SwapInt::~SwapInt() { }

	SwapChar::SwapChar() { }
	SwapChar::~SwapChar() { }

	SwapArr::SwapArr() { }
	SwapArr::~SwapArr() { }

	SwapInt::SwapInt(int &swapnum1, int &swapnum2)
	{
		int tmp;
		tmp = swapnum1;
		swapnum1 = swapnum2;
		swapnum2 = tmp;
	}

	SwapChar::SwapChar(char &swapchar1, char &swapchar2)
	{
		char tmp = '0';
		tmp = swapchar1;
		swapchar1 = swapchar2;
		swapchar2 = tmp;
	}

	SwapArr::SwapArr(int arr1[], int arr2[], int arrcount)
	{
		int *tmparr;
		tmparr = (int *)malloc(sizeof(int) * arrcount);

		for (int i = 0; ; ) {
 			tmparr[i] = arr1[i];
			arr1[i] = arr2[i];
			arr2[i] = tmparr[i];
			i = i + 1;
			if (i == arrcount) { break; }
		}
		free(tmparr);
	}
}