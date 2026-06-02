#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int data;
    Node *next;
    Node *prev;

    Node()
    {
        this->data = 0;
        this->next = 0;
        this->prev = 0;
    }
    Node(int data)
    {
        this->data = data;
        this->next = nullptr;
        this->prev = nullptr;
    }
};

void insertAtTail(int data, Node *&head, Node *&tail)
{
    if (head == NULL)
    {
        Node *newNode = new Node(data);
        head = newNode;
        tail = newNode;
        return;
    }
    Node *newNode = new Node(data);
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
}

void printLL(Node *&head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

void updateAtIndex(int pos, int data, Node *&head)
{
    Node *temp = head;
    if (head == NULL)
    {
        return;
    }
    if (pos <= 0)
    {
        cout << "Inssertion cannot be done." << endl;
        return;
    }
    int count = 1;
    while (temp != NULL && count < pos)
    {
        count++;
        temp = temp->next;
    }
    if (temp == NULL)
    {
        cout << "Invalid Index. Update is not possible.";
        exit(0);
    }
    temp->data = data;
}
int main()
{

    Node *head = nullptr;
    Node *tail = nullptr;
    cout << "Enter n :" << endl;
    int n;
    cin >> n;

    cout << "n = " << n << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << "th element : ";
        int k;
        cin >> k;
        insertAtTail(k, head, tail);
    }
    printLL(head);
    int index;
    int pos;
    cout << "Enter index: ";
    cin >> index;
    cout << "Enter value : ";
    cin >> pos;
    updateAtIndex(index, pos, head);
    printLL(head);
    return 0;
}
