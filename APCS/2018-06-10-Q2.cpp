/*
 * APCS 2018/6/10 Q2 (C++)
 */
#include <iostream>
using namespace std;
int main()
{
    char N[25] = {0};
    short LN[25] = {0};
    int len = 0;
    int num = 0;
    unsigned long long max = 0;
    unsigned long long min = 0;
    cin >> N;
    while (N[len] != '\0')
    {
        len++;
    }

    //getUpper
    int i = 0;
    for (i = 0; i < len; i++)
    {
        if ((N[i] - '0') % 2 == 0)
        {
            max = max * 10 + (N[i] - '0') + 1;
            i++;
            break;
        }
        else
        {
            max = max * 10 + (N[i] - '0');
        }
    }
    for (; i < len; i++)
    {
        max = max * 10 + 1;
    }

    //getLower
    for (i = 0; i < len; i++)
        LN[i] = (N[i] - '0');
    for (i = 0; i < len; i++)
    {
        if (LN[i] % 2 == 0)
        {
            if (LN[i] != 0)
            {
                LN[i] -= 1;
            }
            else
            {
                LN[i] = 9;
                int j;
                for (j = i - 1; j >= 0 && LN[j] == 1; j--)
                {
                    LN[j] = 9;
                }
                if (j < 0)
                {
                    LN[0] = 0;
                }
                else
                {
                    LN[j] -= 2;
                }
            }
            i++;
            break;
        }
    }
    for (; i < len; i++)
    {
        LN[i] = 9;
    }
    for (i = 0; i < len; i++)
    {
        min = min * 10 + LN[i];
    }

    //getNum
    for (i = 0; i < len; i++)
    {
        num = num * 10 + (N[i] - '0');
    }

    if (max - num <= num - min)
        cout << max - num << endl;
    else
        cout << num - min << endl;
    return 0;
}
