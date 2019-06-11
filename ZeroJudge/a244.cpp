/*
 * ZeroJudge a244 (C++)
 * Link: https://zerojudge.tw/ShowProblem?problemid=a244
 */
#include <iostream>
using namespace std;

int main()
{
    int N = 0;
    int a = 0;
    long long b, c = 0;
    cin >> N;
    while (N--)
    {
        cin >> a >> b >> c;
        if (a == 1)
            cout << b + c << endl;
        else if (a == 2)
            cout << b - c << endl;
        else if (a == 3)
            cout << b * c << endl;
        else
            cout << b / c << endl;
    }
    return 0;
}
