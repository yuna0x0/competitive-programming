/*
 * APCS 2016/10/29 Q4
 * Link: https://apcs.csie.ntnu.edu.tw/wp-content/uploads/2018/12/1051029APCSImplementation.pdf
 */
#include <iostream>
using namespace std;
string stat[15][15];
int a = 0; //statN
int b = 0; //outN
int outNum = 0;
int score = 0;
bool onBase[15] = {0};
int main()
{
    for (int i = 0; i < 9; i++)
    {
        cin >> a;
        for (int j = 0; j < a; j++)
        {
            cin >> stat[i][j];
        }
    }
    cin >> b;
    for (int i = 0 && outNum < b; i < 5; i++)
    {
        for (int j = 0; j < 9 && outNum < b; j++)
        {
            if (stat[j][i][1] == 'O')
            {
                outNum++;
                if (outNum % 3 == 0)
                    onBase[1] = onBase[2] = onBase[3] = 0;
            }
            else if (stat[j][i] == "HR")
            {
                score += onBase[1] + onBase[2] + onBase[3] + 1;
                onBase[1] = onBase[2] = onBase[3] = 0;
            }
            else if (stat[j][i] == "1B")
            {
                score += onBase[3];
                onBase[3] = onBase[2];
                onBase[2] = onBase[1];
                onBase[1] = 1;
            }
            else if (stat[j][i] == "2B")
            {
                score += onBase[3] + onBase[2];
                onBase[3] = onBase[1];
                onBase[2] = 1;
                onBase[1] = 0;
            }
            else if (stat[j][i] == "3B")
            {
                score += onBase[3] + onBase[2] + onBase[1];
                onBase[3] = 1;
                onBase[2] = 0;
                onBase[1] = 0;
            }
        }
    }
    cout << score << endl;
    return 0;
}
