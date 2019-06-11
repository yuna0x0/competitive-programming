/*
 * ZeroJudge d460 (C++)
 * Link: https://zerojudge.tw/ShowProblem?problemid=d460
 */
#include <iostream>
using namespace std;

int main()
{
    int a = 0;
    cin >> a;
    if (a >= 60)
        cout << 399 << endl;
    else if (a >= 18)
        cout << 890 << endl;
    else if (a >= 12)
        cout << 790 << endl;
    else if (a >= 6)
        cout << 590 << endl;
    else
        cout << 0 << endl;
    return 0;
}
