/*
    Can we declare a non-reference function argument const (e.g., void f(const int);)?
    What might that mean? Why might we want to do that? Why don’t people do that often? 
    Try it; write a couple of small programs to see what works.
*/

/*
    Answers to the questions above:

    As we can see below, you can declare a non-reference function argument const without any 
    building issues.

    This means that though we can pass a const into a function, we are NOT allowed to edit its value,
    as demonstrated in the commented out test_func function. I had to comment it out because it would
    throw up an error since I am trying to modify an unmodifiable value, the const variable.

    This may be helpful in real world situations when we have massive programs. If we have something we 
    want to make sure we or our coworkers don't accidentally modify, we can use this variable to ensure
    that it cannot be altered. This may also work well for getter functions, or functions that are just
    generally read-only.

    People typically don't do this, however, because most people want to alter their variables, which
    this doesn't allow for. If you do try to modify a const variable, the alterations will not be
    visible to the caller. This will also cause a compiling error.
*/

#include "std_lib_facilities.h"

void f(const int);

// throws an error
/*int test_func(const int test){

    test = test + 1;

    return test;
}*/

/* Program calculates the circumference of a circle. */

double calculate_circum(double const pi, double radius){
    double result;

    result = pi * radius;

    return result;
}

int main(){

    double radius;
    double const pi = 3.14;

    cout << "Enter the radius of your circle: ";
    cin >> radius;

    double result = calculate_circum(pi, radius);

    cout << "The circumference of a circle with the radius of " << radius << " is " << result;

    return 0;
}