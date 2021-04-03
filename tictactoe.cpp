#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

bool isLegal(vector<vector<char>> arr) {
  int x = 0;
  int o = 0;
  for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
          if(arr[i][j]=='X') {
            x++;
          }
          if(arr[i][j]=='O') {
            o++;
          }
      }
  }
  if(o>x) {
    return false;
  }
  if(abs(o-x)>1) {
    return false;
  }
  if(x > 5 || o > 4) {
    return false;
  }
  return true;
}

string nextMove(vector<vector<char>> arr) {
  int x = 0;
  int o = 0;
  for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
          if(arr[i][j]=='X') {
            x++;
          }
          if(arr[i][j]=='O') {
            o++;
          }
      }
  }
  if(o==x) {
    return "first";
  } else {
    return "second";
  }
}

char checkWinner(vector<vector<char>> arr) {
  int xwin = 0;
  int owin = 0;
  char winner = '.';
  for(int i=0;i<3;i++) {
    if(arr[i][0] == arr[i][1] && arr[i][1] == arr[i][2]) {
      if(arr[i][0] == 'X') {
        winner = arr[i][0];
        xwin++;
      }
      if(arr[i][0] == 'O') {
        winner = arr[i][0];
        owin++;
      }
    }
    if(arr[0][i] == arr[1][i] && arr[1][i] == arr[2][i]) {
      if(arr[0][i] == 'X') {
        winner = arr[0][i];
        xwin++;
      }
      if(arr[0][i] == 'O') {
        winner = arr[0][i];
        owin++;
      }
    }
  }
  if(arr[0][0] == arr[1][1] && arr[1][1] == arr[2][2]) {
    if(arr[1][1] == 'X') {
      winner = arr[1][1];
      xwin++;
    }
    if(arr[1][1] == 'O') {
      winner = arr[1][1];
      owin++;
    }
  }
  if(arr[0][2] == arr[1][1] && arr[1][1] == arr[2][0]) {
    if(arr[1][1] == 'X') {
      winner = arr[1][1];
      xwin++;
    }
    if(arr[1][1] == 'O') {
      winner = arr[1][1];
      owin++;
    }
  }
  if(xwin > 0 && owin > 0) {
    return '-';
  } else {
    return winner;
  }
}

bool isDraw(vector<vector<char>> arr) {
  for (int i = 0; i < 3; i++) {
      for (int j = 0; j < 3; j++) {
          if(arr[i][j]=='.') {
            return false;
          }
      }
  }
  return true;
}
int main() {


  vector<vector<char>> arr(3);
  for (int i = 0; i < 3; i++) {
      arr[i].resize(3);

      for (int j = 0; j < 3; j++) {
          cin >> arr[i][j];
      }
  }

  if(!isLegal(arr)) {
    cout << "illegal";
    return 0;
  }
  char c = checkWinner(arr);
  if(c=='-') {
    cout << "illegal";
    return 0;
  }
  if(c=='X') {
    cout << "the first player won";
    return 0;
  }
  if(c=='O') {
    cout << "the second player won";
    return 0;
  }
  if(isDraw(arr)) {
    cout << "draw";
    return 0;
  }
  cout << nextMove(arr);

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
