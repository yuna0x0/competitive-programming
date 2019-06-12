/*
 * UVa Q10300: Ecological Premium (C++)
 * ZeroJudge c005
 * Lucky Cat Link: http://luckycat.kshs.kh.edu.tw/homework/q10300.htm
 * ZeroJudge Link: Link: https://zerojudge.tw/ShowProblem?problemid=c005
 */
#include <iostream>
using namespace std;

int main()
{
    int n = 0;
    int f = 0;
    int b = 0;
    unsigned long long a, c = 0;
    unsigned long long sum = 0;
    cin >> n;
    while (n--)
    {
        sum = 0;
        cin >> f;
        for (int i = 0; i < f; i++)
        {
            cin >> a >> b >> c;
            sum += a * c; // a / b * c * b = a * c
        }
        cout << sum << endl;
    }
    return 0;
}
