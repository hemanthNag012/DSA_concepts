/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/
#include<bits/stdc++.h>
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

ListNode* convertArrToLL(vector<int> &arr){
    ListNode* head=new ListNode(arr[0]);
    ListNode* mover=head;
    for(int i=1;i<arr.size();i++){
        ListNode* temp=new ListNode(arr[i]);
        mover->next=temp;
        mover=mover->next;
    }
    return head;
}

ListNode* deleteHead(ListNode* head){
    ListNode* temp=head;
    head=head->next;
    delete temp;
    return head;
}

ListNode* deleteTail(ListNode* head){
    if(head==nullptr || head->next==nullptr){
        return nullptr;
    }
    ListNode* mover=head;
    while(mover->next->next!=nullptr){
        mover=mover->next;
    }
    delete mover->next;
    mover->next=nullptr;
    return head;
}

void print(ListNode* node){
    ListNode* mover=node;
    while(mover!=NULL){
        cout<<mover->data<<" ";
        mover=mover->next;
    }
    cout<<endl;
}

int main()
{
    vector<int> arr = {1,2,3,4,5};
    ListNode* head=convertArrToLL(arr);
    print(head);
    head=deleteHead(head);
    print(head);
    head=deleteTail(head);
    print(head);
    return 0;
}
