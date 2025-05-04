#include <bits/stdc++.h>
using namespace std;

class Queue
{
    int *Q;
    int size, start, end, currSize;

public:
    Queue()
    {
        Q = new int[16];
        start = end = -1;
        currSize = 0;
    }

    Queue(int side)
    {
        (*this).size = side;
        Q = new int[side];
        start = end = -1;
        currSize = 0;
    }

    void push(int x)
    {
        if (currSize == size)
        {
            cout << "Queue is full" << endl;
            exit(1);
        }
        if (end == -1)
        {
            start = 0;
            end = 0;
        }
        else
            end = (end + 1) % size;

        Q[end] = x;
        cout << "The element pushed is: " << x << endl;
        currSize++;
    }

    int pop()
    {
        if (start == -1)
        {
            cout << "Queue is empty" << endl;
        }
        int popped = Q[start];
        if (currSize == 1)
        {
            start = end = -1;
        }
        else
            start = (start + 1) % size;
        currSize--;
        return popped;
    }

    int top()
    {
        if (start == -1)
        {
            cout << "Queue is empty" << endl;
            exit(1);
        }
        return Q[start];
    }

    int qsize()
    {
        return currSize;
    }
};

int main()
{

    Queue q(6);
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);

    cout << "Top element: " << q.top() << endl;
    cout << "Size: " << q.qsize() << endl;

    cout << "Popped: " << q.pop() << endl;
    cout << "Top element: " << q.top() << endl;
    cout << "Size: " << q.qsize() << endl;

    return 0;
}