/*
 * ZeroJudge a058 (C++)
 * Link: https://zerojudge.tw/ShowProblem?problemid=a058
 */
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int tmp = 0;
    int count[5] = {0};
    cin >> n;
    for (int i = 0; i < n; i++)
    {
        cin >> tmp;
        count[tmp % 3]++;
    }
    cout << count[0] << " " << count[1] << " " << count[2] << endl;
    return 0;
}
