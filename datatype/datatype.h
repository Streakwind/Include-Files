#pragma once

long long strtoll (string curStr) {
    long long res = 0;
    long long curMulti = 1;
    long long curNum = 0;

    reverse(curStr.begin(), curStr.end());

    for (long long i = 0; i < (long long)curStr.length(); i++) {
        curNum = curStr[i] - '0';
        curNum *= curMulti;
        
        res += curNum;

        curMulti *= 10;
    }

    return res;
}
