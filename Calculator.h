#pragma once
#include <string>
#include <map>

using namespace std;

class Calculator
{
public:
	enum Token_value {
		NAME, NUMBER, END,
		PLUS = '+', MINUS = '-', MUL = '*', DIV = '/',
		PRINT = ';', ASSIGN = '=', LP='(', RP=')'
	};

	int run();
	Calculator();
	~Calculator();

private:
	Token_value curr_tok = PRINT;

	double number_value = 0;
	string string_value;
	map<string, double> table;
	int no_of_errors = 0;

	double error(const string& s);
	double expr(bool get);
	Token_value get_token();
	double prim(bool get);
	double term(bool get);
};

