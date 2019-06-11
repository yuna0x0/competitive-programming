/*
 * ZeroJudge d065 (C++)
 * Link: https://zerojudge.tw/ShowProblem?problemid=d065
 */
#include <iostream>
using namespace std;

int main()
{
    int a, b, c = 0;
    cin >> a >> b >> c;
    if (a > b)
    {
        if (b > c)
            cout << a << endl;
        else if (a > c)
            cout << a << endl;
        else
            cout << c << endl;
    }
    else
    {
        if (a > c)
            cout << b << endl;
        else if (b > c)
            cout << b << endl;
        else
            cout << c << endl;
    }
    return 0;
}
