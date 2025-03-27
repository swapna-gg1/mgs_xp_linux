#include <cstdlib>

#include "printInterface.h"
#include "print.h"

extern "C" 
{
    void print_message_in_cpp(const char* message) {
 		PrintClass p;
		p.print_message(message);		       
    };
}
