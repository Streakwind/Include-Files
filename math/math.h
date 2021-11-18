#pragma once

using namespace std;

int add (int a, int b) {
	return a + b;
}

int subtract (int a, int b) {
	return a - b;
}

int multiply (int a, int b) {
	return a * b;
}

int divide (int a, int b) {
	return a / b;
}

int absolute (int a) {
    if (a < 0) {
        return a * -1;
    }

    return a;
}