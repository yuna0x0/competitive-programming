/*
 * ZeroJudge a005 (C++)
 * Tag: Loop
 * Link: https://zerojudge.tw/ShowProblem?problemid=a005
 */
#include <iostream>
using namespace std;

int main()
{
    int t = 0;
    int arr[10] = {0};
    cin >> t;
    while (t--)
    {
        for (int i = 0; i < 4; i++)
        {
            cin >> arr[i];
        }
        if (arr[1] - arr[0] == arr[2] - arr[1])
        {
            for (int i = 0; i < 4; i++)
            {
                cout << arr[i] << " ";
            }
            cout << arr[3] + (arr[1] - arr[0]) << endl;
        }
        else
        {
            for (int i = 0; i < 4; i++)
            {
                cout << arr[i] << " ";
            }
            cout << arr[3] * (arr[1] / arr[0]) << endl;
        }
    }
    return 0;
}
