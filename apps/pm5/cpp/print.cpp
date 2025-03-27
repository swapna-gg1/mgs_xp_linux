
#include "print.h"

#include <iostream>
#include <string>

using namespace std;

extern "C" {

PrintClass::PrintClass()
{}

void PrintClass::print_message(const char *message) {
	std::string s(message);
    std::cout << "PrintClass: " + s  << std::endl; 
	return;
}

PrintClass::~PrintClass()
{}

}
