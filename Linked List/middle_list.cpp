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

int main()
{
    Node *head = new Node(0);
    head->next = new Node(1);
    head->next->next = new Node(2);
    head->next->next->next = new Node(3);
    head->next->next->next->next = new Node(4);
    int count = 0;
    Node *curr = head;
    while (curr->next != NULL)
    {
        curr = curr->next;
        count++;
    }
    for (int i = 0; i < count / 2; i++)
    {
        head = head->next;
    }
    cout << head->key;
}