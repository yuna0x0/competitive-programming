/*
 * ZeroJudge b914 (C++)
 * Link: https://zerojudge.tw/ShowProblem?problemid=b914
 */
#include <iostream>
#include <math.h>
using namespace std;

int main()
{
    int n, m = 0;
    int tmp = 0;
    float sum = 0;
    while (cin >> n)
    {
        if (n == 0)
        {
            cout << 0 << endl;
            continue;
        }
        sum = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> tmp;
            sum += tmp;
        }
        cout << round(sum / n) << endl;
    }
    return 0;
}
