#include <iostream>
using namespace std;

class Node {
    public:
    int data;
    Node* next;
    Node(int val){
        data = val;
        next = nullptr;
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
    fourth->next=second;

    Node* slow=head;
    Node* fast=head;
    while(fast!=nullptr && fast->next->next!=nullptr){
        slow=slow->next;
        fast=fast->next->next;
        if(slow==fast){
            cout<<"cycle detected"<<endl;
            return 0;
        }
    }
    cout<<"no cycle detected"<<endl;
    return 0;
}