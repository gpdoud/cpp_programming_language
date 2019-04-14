#pragma once
#include <malloc.h>

#include "IRunnable.h"
#include "Calculator.h"

class Ch06_Expressions_and_Statements : public IRunnable
{
public:
	void Run() {
		cout << "Ch06_Expressions_and_Statements" << endl;

		RunExplicitCasting();
	}
	void RunCalculator() {
		Calculator calc;
		calc.run();
	}
	void RunExplicitCasting() {
		int *pi = static_cast<int*>(malloc(sizeof(int)*5));
		for(int i = 0; i < 5; i++) {
			cout << "i = " << i << ", val = " << pi[i] << endl;
		}
		free(pi);
	}
	Ch06_Expressions_and_Statements() {};
	~Ch06_Expressions_and_Statements() {};
};

