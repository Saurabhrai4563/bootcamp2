#include <bits/stdc++.h>
using namespace std;
class Stack
{
public:
    int size;
    int topIdx;
    int *arr;

    Stack(int size)
    {
        this->size = size;
        arr = new int[size];
        topIdx = -1;
    }

    void push(int x)
    {
        if (topIdx == size - 1)
        {
            cout << "Stack Overflow" << endl;
            return;
        }

        arr[++topIdx] = x;
    }
    int pop()
    {
        if (topIdx == -1)
        {
            cout << "Stack Underflow" << endl;
            return INT_MIN;
        }
        int data = arr[topIdx];
        topIdx--;
        return data;
    }
    int top()
    {
        if (topIdx == -1)
        {
            cout << "Stack is empty";
            return -1;
        }
        return arr[topIdx];
    }
    bool empty()
    {
        return topIdx + 1;
    }
    ~Stack()
    {
        cout << "Deleting arr" << endl;
        delete[] arr;
    }
};
int main()
{
    Stack *st = new Stack(4);
    st->push(1);
    st->push(2);
    st->push(3);
    st->push(4);

    cout << "Top element :" << st->top() << endl;
    cout << "poped element : " << st->pop() << endl;
    cout << "poped element : " << st->pop() << endl;
    cout << "poped element : " << st->pop() << endl;
    cout << "poped element : " << st->pop() << endl;
    cout << "poped element : " << st->pop() << endl;
    st->push(1);
    st->push(2);
    st->push(3);
    st->push(4);
    st->push(1);
    st->push(2);
    st->push(3);
    st->push(4);
    cout << "All element pushed again" << endl;
    // code
    return 0;
}