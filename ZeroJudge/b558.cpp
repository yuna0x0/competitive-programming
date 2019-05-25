/*
 * ZeroJudge b558
 * Tag: Math
 */
#include <iostream>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(0);
    int n;
    while (cin >> n)
    {
        n--;
        cout << n * (n + 1) / 2 + 1 << '\n';
    }
    return 0;
}