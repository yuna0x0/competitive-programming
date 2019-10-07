/*
 * UVa Q10783: Odd Sum (C++)
 * ZeroJudge c022
 * Lucky Cat Link: http://luckycat.kshs.kh.edu.tw/homework/q10783.htm
 * ZeroJudge Link: Link: https://zerojudge.tw/ShowProblem?problemid=c022
 */
#include <iostream>
using namespace std;

int main()
{
    int T = 0;
    int n = 0;
    int a, b = 0;
    int ans = 0;
    cin >> T;
    while (T--)
    {
        ans = 0;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
            if (i % 2 != 0)
                ans += i;
        }
        n++;
        cout << "Case " << n << ": " << ans << endl;
    }
    return 0;
}
