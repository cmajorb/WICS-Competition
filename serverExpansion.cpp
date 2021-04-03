#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int str_idx(string *str, char chr) {
    for (int i = 0; i < str->size(); i++) {
        if (str->at(i) == chr) {
            return i;
        }
    }
    return -1;
}

int main() {
    int n;
    int i;
    int total = 0;
    int hrs, mins;

    cin >> n;

    for (i = 0; i < n; i++) {
        int sign;
        char chr;
        char* line;
        int val;

        cin >> chr;
        while (chr != '-' and chr != '+') {
            cin >> chr;
        }

        if ('-' == chr) {
            sign = -1;
        }
        else {
            sign = 1;
        }

        chr = cin.peek();

        if (chr == '.' or chr == ':') {
            hrs = 0;
        }
        else {
            cin >> val;
            hrs = val;
        }

        cin >> chr;
        chr = cin.peek();

        if (chr != '\n') {
            cin >> val;
            mins = val;
        }
        else {
            mins = 0;
        }

        total += sign * (60 * hrs + mins);

    }

    hrs = total / 60;
    mins = total % 60;

    char chr;
    if (mins < 10) chr = '0';
    else chr = '\0';

    cout << hrs << ":" << chr << mins;

    return 0;
}
