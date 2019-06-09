/*
 * ZeroJudge d984
 * Tag: Logic
 * Link: https://zerojudge.tw/ShowProblem?problemid=d984
 */
#include <iostream>
using namespace std;
int main()
{
    unsigned int a, b, c = 0;
    while (cin >> a >> b >> c)
    {
        if (a > b)
        {
            if (b > c)
            {
                b += c;
                if (a > b)
                    cout << "A" << endl;
                else
                    cout << "B" << endl;
            }
            else
            {
                if (a > c)
                {
                    c += b;
                    if (a > c)
                        cout << "A" << endl;
                    else
                        cout << "C" << endl;
                }
                else
                {
                    a += b;
                    if (a > c)
                        cout << "A" << endl;
                    else
                        cout << "C" << endl;
                }
            }
        }
        else
        {
            if (a > c)
            {
                a += c;
                if (b > a)
                    cout << "B" << endl;
                else
                    cout << "A" << endl;
            }
            else
            {
                if (b > c)
                {
                    c += a;
                    if (b > c)
                        cout << "B" << endl;
                    else
                        cout << "C" << endl;
                }
                else
                {
                    b += a;
                    if (b > c)
                        cout << "B" << endl;
                    else
                        cout << "C" << endl;
                }
            }
        }
    }
    return 0;
}
