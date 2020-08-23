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

void sortedIns(Node *head, int val)
{
    Node *curr = head;
    Node *nxt = head->next;
    Node *temp = new Node(val);
    if (head == NULL)
    {
        head = temp;
    }
    while (nxt->next != NULL && curr->next->next != NULL)
    {
        if (val >= curr->key && val <= nxt->key)
        {
            temp->next = nxt;
            curr->next = temp;
        }
        curr = curr->next;
        nxt = nxt->next;
    }
}

int main()
{
    Node *head = new Node(0);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(4);
    head->next->next->next->next = new Node(5);
    int val;
    cin >> val;
    sortedIns(head, val);
    print(head);
}