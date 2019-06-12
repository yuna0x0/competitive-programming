/*
 * UVa Q12149: Feynman (C++)
 * ZeroJudge a111
 * Lucky Cat Link: http://luckycat.kshs.kh.edu.tw/homework/q12149.htm
 * ZeroJudge Link: Link: https://zerojudge.tw/ShowProblem?problemid=a111
 */
#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    int ans = 0;
    while (cin >> N)
    {
        if (N == 0)
            break;
        ans = 0;
        for (int i = 1; i <= N; i++)
        {
            ans += i * i;
        }
        cout << ans << endl;
    }
    return 0;
}
