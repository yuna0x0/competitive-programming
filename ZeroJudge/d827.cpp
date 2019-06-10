/*
 * ZeroJudge d827 (C++)
 * Link: https://zerojudge.tw/ShowProblem?problemid=d827
 */
#include <iostream>
using namespace std;

int main()
{
    int n, price = 0;
    cin >> n;
    price += n / 12 * 50;
    n -= n / 12 * 12;
    price += 5 * n;
    cout << price << endl;
    return 0;
}
