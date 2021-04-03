#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

int main() {

    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    int n;
    string num1,num2,out;
    cin >> n;
    cin >> num1;
    cin >> num2;
    cin >> out;
    bool isValid = false;
    int count = 0;

    while(!isValid) {
      int carry = 0;
      int i = n-1;
      while(i >= 0) {
        int x = (num1[i] - '0')+ (num2[i] - '0') + carry;
        //cout << "X: " << x << "  " << x%10 << "  " << (int)out[i];
        if(x%10 != (out[i]- '0')) {
          count++;
          num1.erase(i,1);
          num2.erase(i,1);
          out.erase(i,1);
          n--;
          i = n-1;
          carry = 0;
        } else {
          carry = x/10;
          i--;
        }
      }
      if(stoi(num1)+stoi(num2) == stoi(out)) {
        isValid = true;
      }
    }

    cout << count;
    return 0;
}
