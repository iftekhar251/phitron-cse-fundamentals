#include <iostream>
using namespace std;

class Node
{
public:
    int val;
    Node *next;

    Node(int v)
    {
        val = v;
        next = NULL;
    }
};

void print(Node *head)
{
    Node *temp = head;
    while (temp != NULL)
    {
        cout<<temp->val<<" ";
        temp = temp->next;
    }
    cout << endl;
}
int main()
{
    int Q;
    cin >> Q;

    Node *head = NULL;

    while (Q--)
    {

        int X, V;
        cin >> X >> V;

        if (X == 0)
        {
            Node *newNode = new Node(V);
            newNode->next = head;
            head = newNode;
        }

        else if (X == 1)
        {
            Node *newNode = new Node(V);

            if (head == NULL)
            {
                head = newNode;
            }
            else
            {
                Node *temp = head;
                while (temp->next != NULL)
                {
                    temp = temp->next;
                }
                temp->next = newNode;
            }
        }

        else if (X == 2)
        {

            if (head == NULL)
            {
            }

            else if (V == 0)
            {
                Node *temp = head;
                head = head->next;
                delete temp;
            }

            else
            {
                Node *temp = head;
                int count = 0;

                while (temp != NULL && count < V - 1)
                {
                    temp = temp->next;
                    count++;
                }

                if (temp != NULL && temp->next != NULL)
                {
                    Node *deleteNode = temp->next;
                    temp->next = temp->next->next;
                    delete deleteNode;
                }
            }
        }

        print(head);
    }

    return 0;
}
