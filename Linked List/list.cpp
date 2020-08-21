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
} int main()
{
    Node *head = new Node(0);
    Node *val1 = new Node(1);
    Node *val2 = new Node(2);
    head->next = val1;
    val1->next = val2;
    val2->next = NULL;
    /*short way---
    Node *head = new Node(0);
    head->next = new Node(1);
    head->next->next = new Node(2);*/
    return 0;
}