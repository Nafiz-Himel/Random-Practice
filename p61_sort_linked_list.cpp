#include <bits/stdc++.h>
using namespace std;
class Node
{
public:
    int val;
    Node *next;

    Node(int val)
    {
        this->val = val;
        this->next = NULL;
    }
};

void input(Node *&head, Node *&tail, int val)
{
    Node *newnode = new Node(val);
    if (head == NULL)
    {
        head = newnode;
        tail = newnode;
        return;
    }

    tail->next = newnode;
    tail = newnode;
}

void sorting(Node *head)
{
    for (Node *tmp = head; tmp->next != NULL; tmp = tmp->next)
    {
        for (Node *tmpp = tmp->next; tmpp != NULL; tmpp = tmpp->next)
        {
            if (tmp->val > tmpp->val)
            {
                swap(tmp->val, tmpp->val);
            }
        }
    }
}

void print(Node *head)
{
    Node *tmp = head;
    while (tmp != NULL)
    {
        cout << tmp->val << endl;
        tmp = tmp->next;
    }
}

int main()
{
    Node *head = NULL;
    Node *tail = NULL;

    int val;
    while (true)
    {
        cin >> val;
        if (val == -1)
        {
            break;
        }
        input(head, tail, val);
    }
    sorting(head);
    print(head);
    return 0;
}