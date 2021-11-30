#include "std_lib_facilities.h"

void testInt(const int number);

int returnConst(){
    const int whole = 100;

    return whole;
}

int main(){
    const int number = 5;

    //testInt(number);
    //testInt(5);

    /* Though we were able to declare the function testInt, using the two functions calls above results
    in an error when we try to build the program. So, though we were able to declare it and build it with
    no issues, if we try to call it and build it, we have compiling issues. */

    const int whole = returnConst();
    cout << "Our whole number is " << whole;

    /* Here, we can use a function to declare and return our const variable. */

    // whole = 1+2; This will cause an error, however, as we are attempting to modify the value.

    const int newWhole = 1+3;
    cout << "\nOur new whole number is " << newWhole;

    /* We can make a const the result of arithmetic! */

    return 0;
}