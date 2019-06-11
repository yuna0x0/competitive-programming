/*
 * ZeroJudge a059 (C++)
 * Link: https://zerojudge.tw/ShowProblem?problemid=a059
 */
#include <iostream>
#include <unordered_map>
using namespace std;

int main()
{
    unordered_map<int, bool> arr(0);
    for (int i = 1; i <= 31; i++)
    {
        arr[i * i] = 1;
    }
    int T = 0;
    int a, b = 0;
    int ans = 0;
    int count = 0;
    cin >> T;
    while (T--)
    {
        count++;
        ans = 0;
        cin >> a >> b;
        for (int i = a; i <= b; i++)
        {
            if (arr[i] == 1)
                ans += i;
        }
        cout << "Case " << count << ": " << ans << endl;
    }
    return 0;
}
