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
    const int MAXVAL = 100000;

    int n, c, d, i, ii;
    char temp;
    int cost[MAXVAL];
    int beauty[MAXVAL];
    int kind[MAXVAL];

    cin >> n;
    cin >> c;
    cin >> d;

    for (i = 0; i < n; i++) {
        cin >> beauty[i];
        cin >> cost[i];
        cin >> temp;
        
        if (temp == 'C')  {
            kind[i] = 0;
        }
        else {
            kind[i] = 1;
        }
    }

    int maxBeauty = 0;
    int tdc, tcc, tb;

    for (i = 0; i < n; i++) {
        for (ii = 0; ii < n; ii++) {
            if (i != ii) {
                tdc = 0; tcc = 0;

                if (kind[i] == 0) { tcc += cost[i]; }
                else  { tdc += cost[i]; }

                if (kind[ii] == 0) { tcc += cost[ii]; }
                else { tdc += cost[ii]; }

                if (tdc <= d and tcc <= c) {
                    tb = beauty[i] + beauty[ii];
                    maxBeauty = max(maxBeauty, tb);
                }
            }
        }
    }

    cout << maxBeauty;

    return 0;
}
