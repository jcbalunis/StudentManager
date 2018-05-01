#include "student.h"
#include <iostream>
#include <string>


using namespace std;

void student::setName (string first, string last)
{
    First = first;
    Last = last;
}

string student::fullName ()
{
    string f;
    f = First;
    f.append(" ");
    f.append(Last);

    return f;
}


