

#include <iostream>
#include "uplow.h"

using namespace std;

int main () {
    string a = "hi!";
    string b = "HI!";
    char a_char = 'a';
    char b_char = 'A';

    a = upper(a);
    b = lower(b);
    a_char = upper_char(a_char);
    b_char = lower_char(b_char);

    cout << a << endl;
    cout << b << endl;
    cout << a_char << endl;
    cout << b_char << endl;

    return 0;
}