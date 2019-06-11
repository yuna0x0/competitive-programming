/*
 * ZeroJudge d583 (C++)
 * Link: https://zerojudge.tw/ShowProblem?problemid=d583
 */
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    int n = 0;
    int arr[100005];
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);
        for (int i = 0; i < n; i++)
        {
            cout << arr[i] << " ";
        }
        cout << endl;
    }
    return 0;
}
