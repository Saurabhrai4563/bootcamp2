#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int data;
    Node *next;

    Node()
    {
        this->data = 0;
        this->next = 0;
    }
    Node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
    ~Node()
    {
        cout << this->data << " is deleted." << endl;
    }
};
void insertAtEnd(int data, Node *&head, Node *&tail)
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
    // cout << endl;
}
int findLen(Node *&head)
{
    int count = 0;

    Node *temp = head;
    while (temp != 0)
    {
        count++;
        temp = temp->next;
    }
    return count;
}
int main()
{
    Node *head = 0;
    Node *tail = nullptr;
    int n;
    cin >> n;
    cout << "Enter number :" << endl;
    for (int i = 0; i < n; i++)
    {
        cout << "Enter " << i + 1 << "th element : ";
        int k;
        cin >> k;
        insertAtEnd(k, head, tail);
    }
    printLL(head);
    int len = findLen(head);
    cout << "Length : " << len << endl;
    // code
    return 0;
}