#include <iostream>
using namespace std;
class node{
    public:
    int data;
    node*next;
    node(int val){
        data = val;
        node* head= NULL;
    }
// *******************************inserting value at tail*****************************
};
void insert_attail(node* &head, int val){
    node* n = new node(val);
    if(head==NULL){
        head=n;
        return;
    }
    node* temp = head;
    while(temp->next!=NULL){
        temp = temp->next;
    }
    temp->next =n;
}
// ***************************************inserting value at head******************************
void insert_at_head(node* &head, int val){
    node* n = new node(val);
    n->next= head;
    head=n;
    
}
// *****************************************displaying the value********************************
void display(node*head){
    node*temp = head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    
}
// ****************************************searching the value*************************************
bool search(node* head, int key){
    node*n = head;
    while (n!=NULL)
    {
        if (n->data==key)
        {
            return true;
        }
        n= n->next;
        
    }
    return  false;
    
}
// *********************************deletion******************************
void deletion(node* &head,int val){
    if(head==NULL){
        return;
    }
    
    node*n = head;
    while (n->next->data!=val)
    {
        n= n->next;
    }
    node* temp = n->next;
    n->next = n->next->next;
    delete temp;
}
// *********************************deleting first element*****************************
void deletehead(node*&head){
    node* todelete = head;
    head= head->next;
    delete todelete;
}
// *********************************reversing the element[iterative method]*******************************
node* reverse(node* &head){
    node*prevptr = NULL;
    node*currptr =head;
    node*nextptr;

    while (currptr!=NULL)
    {
        nextptr = currptr->next;
        currptr ->next=prevptr;
        prevptr = currptr;
        currptr = nextptr;
    }
    return prevptr;
}
//**********************************reversing the element [recursive method]**************************
node* reverserec(node*&head){
    if (head==NULL||head->next)
    {
        return head;
    }
    
    node* newhead = reverserec(head->next);
    head->next->next = head;
    head->next= NULL;
    return newhead;
}

int main() {
    node*head = NULL;
    insert_attail(head,5);
    insert_attail(head,3);
    insert_attail(head,2);
    insert_attail(head,1);
    display(head);
    insert_at_head(head,30);
    insert_at_head(head,20);
    display(head);
    cout<<search(head, 3)<<endl;
    deletion(head, 3);
    display(head);
    return 0 ;
}