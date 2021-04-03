#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;


int rec(string n1, string n2, string o, int count, int i, int carry, int n) {
  if(i<0) {
    if(stoi(n1)+stoi(n2) == stoi(o)) {
      return count;
    } else {
      return -1;
    }
  }
  int x = (n1[i] - '0')+ (n2[i] - '0') + carry;
  //cout << "X: " << x << "  " << x%10 << "  " << (int)out[i];
  if(x%10 != (o[i]- '0')) {
    n1.erase(i,1);
    n2.erase(i,1);
    o.erase(i,1);
    return rec(n1,n2,o,count+1,i-1,0,n-1);
  } else {
    //return rec(n1,n2,o,count,i-1,x/10,n);
    int opt1 = rec(n1,n2,o,count,i-1,x/10,n);
    if(opt1 == -1) {
      n1.erase(i,1);
      n2.erase(i,1);
      o.erase(i,1);
      opt1 = rec(n1,n2,o,count+1,i-1,0,n-1);
    }
    return opt1;
  }
}
int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    string num1,num2,out;
    cin >> n;
    cin >> num1;
    cin >> num2;
    cin >> out;

      int count = rec(num1,num2,out,0,n-1,0,n);

    cout << count;
    return 0;
}
