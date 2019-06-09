/*
 * Binary Search (C++) [輸入 q，進行二分搜尋，然後輸出一個於陣列中的位置，該位置左邊全部的數字都小於 q]
 * Time complexity: O(log n)
 */
#include <iostream>
using namespace std;
int main()
{
    int arr[] = {1, 2, 4, 4, 5, 5, 5, 68, 99, 200, 246, 899, 899};
    int N = 13;
    int q;
    while (cin >> q)
    {
        int max = N - 1;
        int min = 0;
        int mid;
        int ans = -1;
        while (max >= min)
        {
            mid = (max + min) / 2;
            if (arr[mid] < q)
            {
                ans = mid;
                min = mid + 1;
            }
            else
                max = mid - 1;
        }
        cout << ans + 1 << endl;
    }
    return 0;
}
