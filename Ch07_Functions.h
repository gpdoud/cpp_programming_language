#pragma once
#include <cmath>

#include "IRunnable.h"

using namespace std;

class Ch07_Functions : public IRunnable {

public:

	void Run() {
		cout << "Ch07_Functions" << endl;
		// call pass by value
		{
			int i = 1;
			cout << "PassByVal: i is " << i << " passed by value ";
			PassByVal(i);
			cout << "value is " << i << endl;
		}
		// call pass by ptr
		{
			int i = 1;
			int* ip = &i;
			cout << "PassByPtr: i is " << i << " passed by ptr ";
			PassByPtr(ip);
			cout << "value is " << i << endl;
		}
		// call pass by ref
		{
			int i = 1;
			cout << "PassByRef: i is " << i << " passed by ref ";
			PassByRef(i);
			cout << "value is " << i << endl;
		}
		// call pass by const ref
		{
			int i = 1;
			cout << "PassByConstRef: i is " << i << " passed by const ref, may not be modified ";
			PassByConstRef(i);
			cout << "value is " << i << endl;
		}
		// arrays as arguments
		{
			int ints[] = { 1, 2, 3, 4, 5, 0 };
			PassArray(ints);
		}
		// calling function with default args
		cout << "3 squared is " << DefArg(3.0) << endl;
		cout << "3 cubed is " << DefArg(3.0, 3.0) << endl;
	}
	Ch07_Functions() {}
	~Ch07_Functions() {}

private:

	void PassByVal(int i) {
		i++;
	}
	void PassByPtr(int* i) {
		(*i)++;
	}
	void PassByRef(int& i) {
		i++;
	}
	void PassByConstRef(const int& i) {
		// i++; <- this is causes syntax error
	}
	void PassArray(int* ints) {
		cout << "PassArray: ints are ";
		while(*ints != 0) {
			cout << *ints++ << " ";
		}
		cout << endl;
	}
	// defaults to squaring base
	float DefArg(float base, float pow = 2) {
		return powf(base, pow);
	}
};