#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

enum Type {
    COIN,
    DIAMOND
};

int main() {
    const int MAXVAL = 1000000;

    int n, c, d, i;
    char temp;
    int cost[MAXVAL];
    int beauty[MAXVAL];
    int kind[MAXVAL];

    cin >> n;
    cin >> c;
    cin >> d;

    for (i = 0; i < n; i++) {
        cin >> cost[i];
        cin >> beauty[i];
        cin >> temp;

        cout << temp << endl;

        if (temp == 'C')  {
            kind[i] = 0;
        }
        else {
            kind[i] = 1;
        }
    }

    /*
    for (i = 0; i < n; i++) {
        for (ii = 0; i 
        */

    return 0;
}
