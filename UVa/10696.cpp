/*
 * UVa Q10696: f91 (C++)
 * ZeroJudge c002
 * Lucky Cat Link: http://luckycat.kshs.kh.edu.tw/homework/q10696.htm
 * ZeroJudge Link: Link: https://zerojudge.tw/ShowProblem?problemid=c002
 */
#include <iostream>
using namespace std;
int f91(int N)
{
    if (N <= 100)
    {
        return f91(f91(N + 11));
    }
    else
    {
        return N - 10;
    }
}
int main()
{
    int N;
    while (cin >> N)
    {
        if (N == 0)
            break;
        cout << "f91(" << N << ") = " << f91(N) << endl;
    }
    return 0;
}
