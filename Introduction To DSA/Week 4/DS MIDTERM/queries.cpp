#include <iostream>
using namespace std;

class Node {
public:
    int val;
    Node* next;
    Node* prev;

    Node(int val) {
        this->val = val;
        this->next = NULL;
        this->prev = NULL;
    }
};

int list_size(Node* head) {
    int count = 0;
    while (head != NULL) {
        count++;
        head = head->next;
    }
    return count;
}

int main() {
    Node* head = NULL;
    Node* tail = NULL;

    int query;
    cin >> query;

    while (query--) {
        int idx, val;
        cin >> idx >> val;

        int sz = list_size(head);

        if (idx < 0 || idx > sz) {
            cout << "Invalid" << endl;
        } 
        else {
            Node* newNode = new Node(val);

            if (idx == 0) {
                if (head == NULL) {
                    head = newNode;
                    tail = newNode;
                } else {
                    newNode->next = head;
                    head->prev = newNode;
                    head = newNode;
                }
            } 
            else if (idx == sz) {
                tail->next = newNode;
                newNode->prev = tail;
                tail = newNode;
            } 
            else {
                Node* temp = head;
                for (int i = 1; i < idx; i++) {
                    temp = temp->next;
                }
                newNode->next = temp->next;
                newNode->prev = temp;
                temp->next->prev = newNode;
                temp->next = newNode;
            }

            cout << "L -> ";
            Node* tempL = head;
            while (tempL != NULL) {
                cout << tempL->val << " ";
                tempL = tempL->next;
            }
            cout << endl;

            cout << "R -> ";
            Node* tempR = tail;
            while (tempR != NULL) {
                cout << tempR->val << " ";
                tempR = tempR->prev;
            }
            cout << endl;
        }
    }

    return 0;
}