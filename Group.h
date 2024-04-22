#pragma once
#include "Student.h"

class Group {
private:
	static const int DEF_SIZE = 30;
	Student list[DEF_SIZE];
	int size;
public:
	Group() : size(0) {}

	bool add(Student st);

	int getSize();
	Student get(int index);

	string convertToString();
};

