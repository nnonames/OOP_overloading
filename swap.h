#pragma once

#include <iostream>
#include <cstring>

using namespace std;

namespace Swap{
	class SwapInt
	{
	public:
		SwapInt();
		SwapInt(int &swapnum1, int &swapnum2);
		~SwapInt();
	};

	class SwapChar
	{
	public:
		SwapChar();
		SwapChar(char &swapchar1, char &swapchar2);
		~SwapChar();
	}; 

	class SwapArr
	{
	public:
		SwapArr();
		SwapArr(int arr1[], int arr2[], int arrcount);
		~SwapArr();
	};
}