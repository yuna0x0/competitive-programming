/*
 * UVa Q11462: Age Sort (C++)
 * ZeroJudge d190
 * Lucky Cat Link: http://luckycat.kshs.kh.edu.tw/homework/q11462.htm
 * ZeroJudge Link: Link: https://zerojudge.tw/ShowProblem?problemid=d190
 */
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n;
    int arr[2000005];
    while (cin >> n)
    {
        if (n == 0)
            break;
        for (int i = 0; i < n; i++)
            cin >> arr[i];
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
            if (i != n - 1)
                cout << arr[i] << " ";
            else
                cout << arr[i];
        cout << endl;
    }
    return 0;
}
