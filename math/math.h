#pragma once

using namespace std;

double add (double a, double b) {
	return a + b;
}

double subtract (double a, double b) {
	return a - b;
}

double multiply (double a, double b) {
	return a + b;
}

double divide (double a, double b) {
	return a / b;
}

double absolute (double a) {
    if (a < 0) {
        return a * -1;
    }

    return a;
}