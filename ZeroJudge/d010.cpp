/*
 * ZeroJudge d010 (C++)
 * Tag: Math, Stack
 * Link: https://zerojudge.tw/ShowProblem?problemid=d010
 */
#include <iostream>
using namespace std;

struct stack
{
    int arr[100005];
    int top = 0;
    void push(int _val)
    {
        top++;
        arr[top] = _val;
    }
    int pop()
    {
        if (top == 0)
            return -1;
        int tmp = 0;
        tmp = arr[top];
        top--;
        return tmp;
    }
} prime;
int main()
{
    int N = 0;
    int tmp = 1;
    int sum = 0;
    while (cin >> N)
    {
        sum = 0;
        tmp = 1;
        while (tmp < N)
        {
            if (!(N % tmp))
            {
                prime.push(tmp);
            }
            tmp++;
        }
        while (prime.top > 0)
        {
            tmp = prime.pop();
            sum += tmp;
        }
        if (sum > N)
            cout << "盈數" << endl;
        else if (sum == N)
            cout << "完全數" << endl;
        else
            cout << "虧數" << endl;
    }
    return 0;
}
