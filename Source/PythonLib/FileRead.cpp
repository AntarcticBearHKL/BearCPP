#include <windows.h>
#include <iostream>

typedef struct {
	int a;
	int b;
	char* str;
} Tep;

int main(int argc, char** argv) {
	Tep t = Tep();
	*(t.str) = 'h';
	std::cout << *(t.str);
}
