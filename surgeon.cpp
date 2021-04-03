#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>
#include <iostream>
#include <vector>
using namespace std;

int main() {
    int m,n;
    cin >> m;
    cin >> n;
    vector<vector<char>> arr(m);
    for (int i = 0; i < m; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    cout << arr[0][0];
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
