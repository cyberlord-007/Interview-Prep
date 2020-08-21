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
    vector<int> v;
    Node *curr = head;
    while (curr->next != NULL)
    {
        v.push_back(curr->key);
        curr = curr->next;
    }
    v.push_back(curr->key);
    for (curr = head; curr->next != NULL; curr = curr->next)
    {
        curr->key = v.back();
        v.pop_back();
    }
    curr->key = v.back();
    v.pop_back();
    print(head);
}