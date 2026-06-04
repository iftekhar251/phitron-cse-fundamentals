#include <bits/stdc++.h>
using namespace std;

class Node
{
public:
    int val;
    Node *left;
    Node *right;
    Node(int val)
    {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node *input_tree()
{
    int val;
    cin >> val;
    Node *root;
    if (val == -1)
        root = NULL;
    else
        root = new Node(val);

    queue<Node *> q;
    if (root)
        q.push(root);

    while (!q.empty())
    {
        Node *p = q.front();
        q.pop();
        int l, r;
        cin >> l >> r;
        Node *myleft, *myright;
        if (l == -1)
            myleft = NULL;
        else
            myleft = new Node(l);
        if (r == -1)
            myright = NULL;
        else
            myright = new Node(r);
        p->left = myleft;
        p->right = myright;
        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }
    return root;
}
void level_order(Node *root)
{
    if (root == NULL)
    {
        cout << "NO TREE";
    }
    queue<Node *> q;
    q.push(root);
    while (!q.empty())
    {
        Node *f = q.front();
        q.pop();
        cout << f->val << " ";
        if (f->left)
        {
            q.push(f->left);
        }
        if (f->right)
        {
            q.push(f->right);
        }
    }
}
int main()
{
    Node *root = input_tree();

    stack<int> st;
    if (root->left)
    {
        Node *temp = root->left;
        while (temp)
        {
            st.push(temp->val);
            if (temp->left)
            {
                temp = temp->left;
            }
            else
            {
                temp = temp->right;
            }
        }
    }

    while (!st.empty())
    {
        cout << st.top() << " ";
        st.pop();
    }

    cout << root->val << " ";

    if (root->right)
    {
        Node *temp2 = root->right;
        while (temp2)
        {
            cout << temp2->val << " ";
            if (temp2->right)
            {
                temp2 = temp2->right;
            }
            else
            {
                temp2 = temp2->left;
            }
        }
    }

    return 0;
}