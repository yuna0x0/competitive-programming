/*
 * UVa Q10055: Hashmat the brave warrior (C++)
 * ZeroJudge a012
 * Lucky Cat Link: http://luckycat.kshs.kh.edu.tw/homework/q10055.htm
 * ZeroJudge Link: Link: https://zerojudge.tw/ShowProblem?problemid=a012
 */
#include <iostream>
using namespace std;

int main()
{
    long long a, b = 0;
    while (cin >> a >> b)
    {
        cout << abs(a - b) << endl;
    }
    return 0;
}
