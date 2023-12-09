#include <iostream>
using namespace std;
//singly linked list

// contians head
// class ListNode{
//     public:
//     int val;
//     ListNode* next;

//     ListNode(int val){
//         this->val=val;
//         this->next=NULL;
//     }

// };
// int main(){
//     ListNode* node=new ListNode(10);
//     cout<<node->next;
// }


//doubly linked list
//contains both head and tail
class ListNode{

    public:
    int val;
    ListNode* next;
    ListNode* prev;

    ListNode(int val){
        this->val=val;
        this->next=NULL;
        this->prev=NULL;
    }
    

};

int main(){
    ListNode* node= new ListNode(10);
    cout<<node->val;
    return 0;

}