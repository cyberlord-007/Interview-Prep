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
    Node *head = new Node(1);
    head->next = new Node(2);
    head->next->next = new Node(3);
    int inp;
    cin >> inp;
    Node *val = new Node(inp);
    val->next = head;
    head = val;
    print(head);
}