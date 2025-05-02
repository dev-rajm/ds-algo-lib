#include <bits/stdc++.h>
using namespace std;

class Stack
{
private:
    int size;
    int top;
    int *S;

public:
    Stack() { top = -1; }
    void Create();
    void Display();
    void Push(int x);
    void Pop();
    int Peek(int index);
    bool isEmpty() { return top == -1; }
    bool isFull() { return top == size - 1; }
    int StackTop();
};

void Stack::Create()
{
    cout << "Enter the size: ";
    cin >> size;
    S = new int[size];
}

void Stack::Display()
{
    for (int i = top; i >= 0; i--)
    {
        cout << S[i] << " ";
    }
    cout << endl;
}

void Stack::Push(int x)
{
    if (!isFull())
    {
        top++;
        S[top] = x;
    }
    else
    {
        cout << "Stack Overflow\n";
    }
}

void Stack::Pop()
{
    if (!isEmpty())
    {
        top--;
    }
    else
    {
        cout << "Stack Underflow\n";
    }
}

int Stack::StackTop()
{
    if (!isEmpty())
    {
        return S[top];
    }
    return -1;
}

int Stack::Peek(int index)
{
    int x = -1;
    if (top - index + 1 < 0)
        cout << "Invalid Index\n";
    else
        x = S[top - index + 1];
    return x;
}

int main()
{
    Stack st;
    st.Create();

    st.Push(10);
    st.Push(20);
    st.Push(30);
    st.Push(40);
    st.Push(50);

    st.Display();

    cout << "Element at 3 is: " << st.Peek(3) << "\n";

    st.Pop();

    cout << "Stack elements after poping one element" << "\n";
    st.Display();

    return 0;
}