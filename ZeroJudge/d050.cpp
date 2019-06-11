/*
 * ZeroJudge d050 (C++)
 * Link: https://zerojudge.tw/ShowProblem?problemid=d050
 */
#include <iostream>
using namespace std;

int main()
{
    int h = 0;
    cin >> h;
    if (h - 15 < 0)
        cout << 24 + (h - 15) << endl;
    else
        cout << h - 15 << endl;
    return 0;
}
