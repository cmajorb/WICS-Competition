#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
    int n = 0;
    int sign = 1;
    cin >> n;

    string str = "a";
    for(int i = 0; i < n; i++)
    {
        sign = 1;
        cin >> str;
        for(int j = 0; j < str.size(); j++)
        {
            cout << str.substr(j,1) << "\n";
            if(str.substr(j,1).compare("-"))
            {
                sign = -1;
            }
            //else if(str.substr(j,0).compare("-"))
        }
    }
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */   
    return 0;
}
