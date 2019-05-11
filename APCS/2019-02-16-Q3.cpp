/*
 * APCS 2019/2/16 Q3
 * Tag: Stack
 */
#include <iostream>
using namespace std;

int num_tmp, num_tmp2, num_tmp3, num_total;

struct Stack
{
    int top;
    int item[10000];
    void push(int _item)
    {
        item[top] = _item;
        top++;
    }
    void pop()
    {
        top--;
    }
} item_stack;

void cmp(char _chr)
{
    switch (_chr)
    {
    case 'f':
        num_tmp = item_stack.item[item_stack.top - 1];
        num_total = num_tmp + 2;
        item_stack.pop();
        item_stack.push(num_total);
        break;
    case 'g':
        num_tmp = item_stack.item[item_stack.top - 1];
        num_tmp2 = item_stack.item[item_stack.top - 2];
        num_total = 3 * num_tmp + 4 * num_tmp2 + 5;
        item_stack.pop();
        item_stack.pop();
        item_stack.push(num_total);
        break;
    case 'h':
        num_tmp = item_stack.item[item_stack.top - 1];
        num_tmp2 = item_stack.item[item_stack.top - 2];
        num_tmp3 = item_stack.item[item_stack.top - 3];
        num_total = 6 * num_tmp + 7 * num_tmp2 + 8 * num_tmp3 + 9;
        item_stack.pop();
        item_stack.pop();
        item_stack.pop();
        item_stack.push(num_total);
        break;
    }
}

int main()
{
    int n;
    char tmp;
    char arr[10000];
    while (cin >> n)
    {
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        item_stack.top = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if (arr[i] == 'f')
            {
                cmp(arr[i]);
            }
            else if (arr[i] == 'g')
            {
                cmp(arr[i]);
            }
            else if (arr[i] == 'h')
            {
                cmp(arr[i]);
            }
            else
            {
                item_stack.push(arr[i] - '0');
            }
        }
        cout << item_stack.item[0] << endl;
    }
    return 0;
}