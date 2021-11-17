

#include <iostream>
#include "uplow.h"

using namespace std;

int main () {
    string a = "hi!";
    string b = "HI!";

    a = upper(a);
    b = lower(b);

    cout << a << endl;
    cout << b << endl;

    return 0;
}