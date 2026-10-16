#include <iostream>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node(int val){
        data=val;
        next=nullptr;
    }
};
int main(){
    Node* head=new Node(10);
    Node* second=new Node(20);
    Node* third=new Node(30);
    Node* fourth=new Node(40);
    Node* fifth=new Node(50);


    head->next=second;
    second->next=third;
    third->next=fourth;
    fourth->next=fifth;


    Node* temp=head;
    Node* prev=nullptr;
    while(temp!=nullptr){
        Node* nextnode=temp->next;
        temp->next=prev;
        prev=temp;
        temp=nextnode;
    }
    head=prev;

    while(head!=nullptr){
        cout<<head->data<<"->";
        head=head->next;
    }
    cout<<"nullptr"<<endl;

}