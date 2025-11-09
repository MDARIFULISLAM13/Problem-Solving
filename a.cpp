/**
 *
 * Author : Md.Ariful Islam
 * Date : 2025-11-07
 * Time : 22:02:34
 *
 **/
#include <bits/stdc++.h>
using namespace std;
using ll = long long int;
const int n = 10;
int arr[n];
ll cnt = -1;
void operation();

void push(ll x)
{
    if (cnt == n - 1)
    {
        cout << "Overflow\n";
        operation();
    }

    ++cnt;
    arr[cnt] = x;
    operation();
}

void pop()
{
    if (cnt == -1)
    {
        cout << "underflow\n";
        operation();
    }

    cout << "Dequeued: " << arr[0] << "\n";

    for (int i = 0; i < cnt; ++i)
    {
        arr[i] = arr[i + 1];
    }
    --cnt;
    operation();
}

void print()
{
    cout << "Output : \n";
    if (cnt == -1)
    {
        cout << "Queue is empty\n";
    }
    else
    {
        for (int i = 0; i <= cnt; ++i)
        {
            cout << arr[i] << endl;
        }
    }
    operation();
}

void operation()
{
    cout << "1-push\n2-pop\n3-print\n";

    ll x;
    cin >> x;
    if (x == 1)
    {
        ll val;
        cout << "INput value\n";
        cin >> val;
        push(val);
    }
    else if (x == 2)
    {
        pop();
    }
    else if (x == 3)
    {
        print();
    }
    else
    {
        operation();
    }
}

int main()
{
    operation();
    return 0;
}
