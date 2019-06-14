/*
 * UVa Q10295: Hay Points (C++)
 * Lucky Cat Link: http://luckycat.kshs.kh.edu.tw/homework/q10295.htm
 */
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int m, n = 0;
    string word[1005];
    int wordPoint[1005] = {0};
    int point = 0;
    string tmp;
    cin >> m >> n;
    for (int i = 0; i < m; i++)
    {
        cin >> word[i] >> wordPoint[i];
    }
    while (n--)
    {
        point = 0;
        while (1)
        {
            cin >> tmp;
            if (tmp == ".")
                break;
            for (int i = 0; i < m; i++)
            {
                if (word[i] == tmp)
                    point += wordPoint[i];
            }
        }
        cout << point << endl;
    }
    return 0;
}
