#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n = 0;
    cin >> n;
    
    int x = 0;
    int y = 0;
    int d = 0;
    int score = 0;
    for(int i = 0; i < n; i++)
    {
        cin >> x;
        cin >> y;
        d = (int)sqrt(x*x + y*y);
        
        if(d <= 10)
        {
            score += 10;
        }
        else if(10 < d && d <= 30)
        {
            score += 9;
        }
        else if(30 < d && d <= 50)
        {
            score += 8;
        }
        else if(50 < d && d <= 70)
        {
            score += 7;
        }
        else if(70 < d && d <= 90)
        {
            score += 6;
        }
        else if(90 < d && d <= 110)
        {
            score += 5;
        }
        else if(110 < d && d <= 130)
        {
            score += 4;
        }
        else if(130 < d && d <= 150)
        {
            score += 3;
        }
        else if(150 < d && d <= 170)
        {
            score += 2;
        }
        else if(170 < d && d <= 190)
        {
            score += 1;
        }
        //cout << "\n";
        //cout << score;
        
    }
    cout << score;
    /* Enter your code here. Read input from STDIN. Print output to STDOUT */    
    return score;
}
