#ifndef _STUDENT_H_
#define _STUDENT_H_
#include <iostream>
#include <string>

using namespace std;

class student
{
private:
    
    string First;  // First Name
    string Last;   // Last Name
    string Full;   // Full Name
    int number;    // Class Number
public:
void setName ( string, string);
string fullName ();

};

#endif
