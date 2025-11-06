#include <bits/stdc++.h>
using namespace std;

class Queue
{
private:
    int a, b, c;
    int *d;

public:
    Queue(int e)
    {
        c = e;
        d = new int[c];
        a = b = -1;
    }

    void enqueue(int f)
    {
        if (b == c - 1)
        {
            cout << "Queue Overflow\n";
            return;
        }
        if (a == -1)
            a = 0;
        d[++b] = f;
    }

    void dequeue()
    {
        if (a == -1 || a > b)
        {
            cout << "Queue Underflow\n";
            return;
        }
        a++;
    }

    int peek()
    {
        if (a == -1 || a > b)
        {
            cout << "Queue is Empty\n";
            return -1;
        }
        return d[a];
    }

    bool isEmpty()
    {
        return a == -1 || a > b;
    }

    ~Queue() { delete[] d; }
};

int main()
{
    Queue q(5);

    q.enqueue(10);
    q.enqueue(20);
    q.enqueue(30);
    q.enqueue(40);
    q.enqueue(50);
    cout << "Front element is " << q.peek() << endl;

    q.dequeue();
    cout << "Front element after dequeue is " << q.peek() << endl;

    q.dequeue();
    q.dequeue();
    cout << "Is queue empty? " << (q.isEmpty() ? "Yes" : "No") << endl;

    return 0;
}
