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

double power (double base, double power) {
	if (base==0) {
		return 0;	
	}
	if(base==1 || power==0) {
		return 1;	
	}
	if(power==1) {
		return base;	
	}

	int curInt = 0;
	curInt = base;
	for (int i = 1; i<power; i++) {
		base *= curInt;	
	}
	
	return base;
}
