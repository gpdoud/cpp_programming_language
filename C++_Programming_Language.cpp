#include <iostream>
#include <vector>

#include "Ch06_Expressions_and_Statements.h"
#include "Ch07_Functions.h"

int main() {

	std::vector<IRunnable*> modules = {
//		new Ch06_Expressions_and_Statements(),
		new Ch07_Functions()
	};

	std::cout << "CPP Programming Language" << std::endl;

	for(IRunnable *mod : modules) {
		mod->Run();
	}

	std::cout << "Done..." << std::endl;
}
