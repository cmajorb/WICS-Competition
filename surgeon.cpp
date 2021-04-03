#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int m,n;

int getMinDistance(int x, int y,vector<vector<char>> arr1) {
  int min = INT_MAX;
  for (int i = 0; i < m; i++) {
      for (int j = 0; j < n; j++) {
          if(arr1[i][j]=='*') {
            if(abs(x-j) > abs(y-i)) {
              if(abs(x-j) < min) {
                min = abs(x-j);
              }
            } else {
              if(abs(y-i) < min) {
                min = abs(y-i);
              }
            }
          }
      }
  }
  return min;
}

int main() {
    cin >> m;
    cin >> n;
    vector<vector<char>> arr(m);
    for (int i = 0; i < m; i++) {
        arr[i].resize(n);

        for (int j = 0; j < n; j++) {
            cin >> arr[i][j];
        }
    }
    cout << getMinDistance(0,3,arr) << endl;
    cout << getMinDistance(1,3,arr) << endl;
    cout << getMinDistance(2,3,arr) << endl;
    cout << getMinDistance(3,3,arr) << endl;
    cout << getMinDistance(4,3,arr) << endl;
    cout << getMinDistance(4,2,arr) << endl;
    cout << getMinDistance(4,1,arr) << endl;

    return 0;
}
