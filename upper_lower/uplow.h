#pragma once

using namespace std;

string upper (string a) {

    for (int i = 0; i < a.length(); i++) {
        if (int(a[i]) > 91 && int(a[i]) < 123) {
            a[i] = int(a[i]) - 32;
        }
    }

    return a;
}

string lower (string a) {

    for (int i = 0; i < a.length(); i++) {
        if (int(a[i]) > 64 && int(a[i]) < 91) {
            a[i] = int(a[i]) + 32;
        }
    }

    return a;
}

char upper_char (char a) {

    if (int(a) > 91 && int(a) < 123) {
        a = int(a) - 32;
    }

    return a;
}

char lower_char (char a) {

    if (int(a) > 64 && int(a) < 91) {
        a = int(a) + 32;
    }

    return a;
}