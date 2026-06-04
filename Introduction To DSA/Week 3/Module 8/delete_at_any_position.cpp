#include<iostream>
using namespace std;
class Node{
    public:
         int val;
         Node *next;
         Node* prev;
    Node (int val)
    {
        this->val =val;
        this->next =NULL;
        this->prev =NULL;
    }
};
void print_forward(Node* head)
{
  Node* tmp=head;
  while(tmp!=NULL)
  {
    cout<<tmp->val<<" ";
    tmp=tmp->next;
  }
  cout<<endl;
}
void delete_at_any_pos(Node* &head,Node* &tail,int idx){
  
    Node* tmp=head;
    for(int i=1;i<idx;i++)
    {
        tmp=tmp->next;
    }
    Node* deletenode=tmp->next;
    tmp->next=tmp->next->next;
    tmp->next->prev=tmp;
    delete deletenode;
    

}
int main()

{
      Node* head=new Node(10);
      Node* a=new Node(20);
      Node* tail=new Node(30);

      head->next=a;
      a->prev=head;


      a->next=tail;
      tail->prev=a;
      delete_at_any_pos(head,tail,1);
      delete_at_any_pos(head,tail,2);

      print_forward(head);
}