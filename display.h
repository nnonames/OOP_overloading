#pragma once

#include <iostream>
#include <cstring>

using namespace std;

namespace Display {
	class PrtNum
	{
	public:
		PrtNum();
		PrtNum(int x, int y);
		~PrtNum();
	};

	class PrtStr
	{
	public:
		PrtStr();
		PrtStr(string str1, string str2);
		void PrtTwoStr(int arr1[], int arr2[], int arrcount, string str);
		~PrtStr();
	};

	class PrtNumStr
	{
	public:
		PrtNumStr();
		PrtNumStr(string str, int count);
		~PrtNumStr();
	};

}