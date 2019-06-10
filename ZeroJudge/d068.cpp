/*
 * ZeroJudge d068 (C++)
 * Link: https://zerojudge.tw/ShowProblem?problemid=d068
 */
#include <iostream>
using namespace std;

int main()
{
    int w;
    cin >> w;
    if (w > 50)
        cout << w - 1 << endl;
    else
        cout << w << endl;
    return 0;
}
