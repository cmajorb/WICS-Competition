#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n = 0;
    cin >> n;

    double x = 0;
    double y = 0;
    double d = 0;
    int totalScore = 0;
    for(int i = 0; i < n; i++)
    {
        int score;
        cin >> x;
        cin >> y;
        d = sqrt(x*x + y*y);
        if(d <= 10)
        {
            score = 10;
        }
        else if(d <= 30)
        {
            score = 9;
        }
        else if(d <= 50)
        {
            score = 8;
        }
        else if(d <= 70)
        {
            score = 7;
        }
        else if(d <= 90)
        {
            score = 6;
        }
        else if(d <= 110)
        {
            score = 5;
        }
        else if(d <= 130)
        {
            score = 4;
        }
        else if(d <= 150)
        {
            score = 3;
        }
        else if(d <= 170)
        {
            score = 2;
        }
        else if(d <= 190)
        {
            score = 1;
        } else {
          score = 0;
        }
        cout << d << "--" << score << endl;

        totalScore += score;
        //cout << "\n";
        //cout << score;

    }
    cout << totalScore;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */
    return 0;
}
