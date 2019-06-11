/*
 * UVa Q497: Strategic Defense Initiative (C++)
 * Tag: LIS
 * Lucky Cat Link: http://luckycat.kshs.kh.edu.tw/homework/q497.htm
 * Time complexity: O(n*m)
 */
#include <iostream>
using namespace std;

int arr[1000005], arr_source[1000005];
int lis_best[1000005], lis_best_pos[1000005], lis_best_source[1000005] = {0};
int ans[1000005];
int main()
{
    int n, tmp;
    int al;
    int lisl, maxs;
    int ansl;
    cin >> n;
    cin.get();
    while (n--)
    {
        cin.get();
        al = 0;
        while (cin.peek() != '\n' && cin >> arr[al])
        {
            al++;
            cin.get();
        }
        if (al == 0)
        {
            cout << "Max hits: 0" << endl;
            if (n != 0)
                cout << endl;
            continue;
        }
        lisl = 1;
        lis_best[lisl] = arr[0];
        lis_best_pos[1] = 0;
        lis_best_source[1] = -1;
        arr_source[0] = -1;
        for (int i = 1; i < al; i++)
        {
            int num = arr[i];
            if (num > lis_best[lisl])
            {
                lisl++;
                lis_best[lisl] = num;
                lis_best_pos[lisl] = i;
                lis_best_source[lisl] = lis_best_pos[lisl - 1];
                arr_source[i] = lis_best_source[lisl];
            }
            else if (num < lis_best[1])
            {
                lis_best[1] = num;
                lis_best_pos[1] = i;
                lis_best_source[1] = -1;
                arr_source[i] = -1;
            }
            else
            {
                for (int j = lisl - 1; j >= 1; j--)
                {
                    if (lis_best[j] < num)
                    {
                        lis_best[j + 1] = num;
                        lis_best_pos[j + 1] = i;
                        lis_best_source[j + 1] = lis_best_pos[j];
                        arr_source[i] = lis_best_source[j + 1];
                        break;
                    }
                }
            }
        }
        cout << "Max hits: " << lisl << endl;
        maxs = lis_best_pos[lisl];
        ansl = 0;
        while (maxs != -1)
        {
            ans[ansl] = arr[maxs];
            maxs = arr_source[maxs];
            ansl++;
        }
        ansl--;
        for (int i = ansl; i >= 0; i--)
            cout << ans[i] << endl;
        if (n != 0)
            cout << endl;
    }
    return 0;
}
