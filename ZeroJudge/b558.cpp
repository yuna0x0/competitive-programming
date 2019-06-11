/*
 * ZeroJudge b558 (C++)
 * Tag: Math
 * Link: https://zerojudge.tw/ShowProblem?problemid=b558
 */
#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        n--;
        cout << n * (n + 1) / 2 + 1 << endl;
    }
    return 0;
}
