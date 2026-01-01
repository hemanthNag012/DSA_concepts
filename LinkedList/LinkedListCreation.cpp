/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
using namespace std;

class ListNode {
    public:
        int data;
        ListNode* next;
        
        ListNode(){
            this->data=0;
            this->next=nullptr;
        };
        
        ListNode(int data){
            this->data=data;
            this->next=nullptr;
        };
        
        ListNode(int data,ListNode* node){
            this->data=data;
            this->next=node;
        };
};

int main()
{
    ListNode node=ListNode(10);
    cout<<node.data<<endl;
    ListNode* newNode = new ListNode(20);
    node.next=newNode;
    cout<<node.next->data;

    return 0;
}

//Output
//10
//20
