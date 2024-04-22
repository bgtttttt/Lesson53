#include "Manager.h"
#include <iostream>
using namespace std;

void test() {
	Student st1{ "Alex", 14, 9 };
	Student st2{ "Alex", 14, 9 };
	Student st3{ "Alex", 14, 9 };
	Student st4{ "Alex", 14, 9 };
}

int main() {
	Student st1{ "Alex", 14, 9 };
	Student st2{ "Alex", 14, 9 };
	Student st3{ "Alex", 14, 9 };
	test();

	cout << Student::getCount() << endl;

	return 0;
}
