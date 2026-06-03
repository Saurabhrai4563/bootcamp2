#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node(int data)
    {
        this->data = data;
        Node *next = nullptr;
    }
    ~Node()
    {
        cout << "Node : Deleted node : " << this->data << endl;
    }
};
class Stack
{
    Node *topNode;

public:
    Stack()
    {
        topNode = NULL;
    }
    void push(int x)
    {
        Node *newNode = new Node(x);
        newNode->next = topNode;
        topNode = newNode;
    }
    void pop()
    {
        if (topNode == NULL)
        {
            cout << "Stack Underlow\n"
                 << endl;
            return;
        }
        cout << "deleted data" << topNode->data << endl;
        Node *temp = topNode;
        topNode = topNode->next;
        delete temp;
    }
    int top()
    {
        return topNode->data;
    }
    ~Stack()
    {
        cout << "Stack : Deleted node : " << this << endl;
    }
};
int main()
{
    Stack *st = new Stack();
    st->push(9);
    st->push(10);
    st->push(11);
    st->pop();
    st->pop();
    cout << "Top most element :" << st->top();

    // code
    return 0;
}