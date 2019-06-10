/*
 * ZeroJudge b993 (C++)
 * Tag: if, Loop
 * Link: https://zerojudge.tw/ShowProblem?problemid=b993
 */
#include <iostream>
using namespace std;

int main()
{
    int N, P, pMax = 0;
    while (cin >> N)
    {
        pMax = 0;
        for (int i = 0; i < N; i++)
        {
            cin >> P;
            if (P > pMax)
                pMax = P;
        }
        cout << pMax << endl;
    }
    return 0;
}
