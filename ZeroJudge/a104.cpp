/*
 * ZeroJudge a104 (C++)
 * Link: https://zerojudge.tw/ShowProblem?problemid=a104
 */
#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n = 0;
    int arr[1005];
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
