/*
 * ZeroJudge d073 (C++)
 * Link: https://zerojudge.tw/ShowProblem?problemid=d073
 */
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    cin >> n;
    if (n % 3 == 0)
        cout << n / 3 << endl;
    else
        cout << n / 3 + 1 << endl;
    return 0;
}
