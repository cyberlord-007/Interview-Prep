#include <bits/stdc++.h>
using namespace std;
typedef long long int ll;
#define w(t)  \
    int t;    \
    cin >> t; \
    while (t--)
#define dec(x, y) fixed << setprecision(y) << x
#define M 1000000007

struct Node
{
    int key;
    Node *next;
    Node(int x)
    {
        key = x;
        next = NULL;
    }
};

void print(Node *head)
{
    if (head == NULL)
        return;
    cout << head->key << " ";
    print(head->next);
}

void insAtN(Node *head, int pos, int val)
{
    Node *curr = head;
    Node *temp = new Node(val);
    if (pos == 1)
    {
        temp->next = head;
    }
    for (int i = 1; i <= pos - 2 && curr != NULL; i++)
    {
        curr = curr->next;
    }
    if (curr == NULL)
        return;
    temp->next = curr->next;
    curr->next = temp;
}

int main()
{
    Node *head = new Node(0);
    head->next = new Node(1);
    head->next->next = new Node(3);
    int pos, val;
    cin >> pos >> val;
    insAtN(head, pos, val);
    print(head);
}