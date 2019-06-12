/*
 * ZeroJudge a147 (C++)
 * Link: https://zerojudge.tw/ShowProblem?problemid=a147
 */
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    while (cin >> n)
    {
        if (n == 0)
            break;
        for (int i = 1; i < n; i++)
        {
            if (i % 7 != 0)
                cout << i << " ";
        }
        cout << endl;
    }
    return 0;
}
