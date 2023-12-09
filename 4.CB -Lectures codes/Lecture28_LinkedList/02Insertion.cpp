#include <iostream>
using namespace std;

//tc: O(1)
class ListNode{
    public:
    int val;
    ListNode* next;

    ListNode(int val){
        this->val=val;
        this->next=NULL;
    }
};
void insertAtHead(ListNode*& head,int val){

    //1.create a new node on heap with given 'val';
    ListNode* n=new ListNode(val);

    //2.update the next field of newly created to point the current head of the LL.
    this->n=head;

    //3.make the newly connected node as the new head of LL.
    head=n;
}

void printLinkedList(ListNode* head){
    
}


int main(){
    // ListNode* node=new ListNode(10);
    // cout<<node->val;

    ListNode* head =NULL;
    insertAtHead(head,50);
    insertAtHead(head,40);
    insertAtHead(head,30);
    insertAtHead(head,20);
    insertAtHead(head,10);

    printLinkedList(head);





}