#include <iostream>
using namespace std;
class node
{
public:
    int data;
    node *next;
    node(int data)
    {
        this->data = data;
        this->next = NULL;
    }
};
void insertAtHead(node *&head, int val)
{
    node *new_node = new node(val);
    new_node->next = head;
    head = new_node;
}
void insertAtTail(node *&head, int val)
{
    node *new_node = new node(val);
    node *temp = head;
    while (temp->next != NULL)
    {
        temp = temp->next;
    }
    temp->next = new_node;
}
void printNode(node *head)
{
    node *temp = head;
    while (temp != NULL)
    {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}
void insertAtPositon(node *&head, int k, int val)
{
    if (k == 0)
    {
        insertAtHead(head, val);
        return;
    }
    node *temp = head;
    int curr_pos = 0;
    while (curr_pos != k - 1)
    {
        temp = temp->next;
        curr_pos++;
    }
    node *new_node = new node(val);
    new_node->next = temp->next;
    temp->next = new_node;
}
void updateAtPosition(node *&head, int k, int val)
{
    node *temp = head;
    int curr_pos = 0;
    while (curr_pos != k)
    {
        temp = temp->next;
        curr_pos++;
    }
    temp->data = val;
}
void deleteAtHead(node *&head)
{
    node *temp = head;
    head = head->next;
    free(temp);
}
void deleteAtEnd(node *head)
{
    node *second_last = head;
    while (second_last->next->next != NULL)
    {
        second_last = second_last->next;
    }
    // temp is now pointing to target or second_last->next
    node *temp = second_last->next;
    second_last->next = NULL;
    free(temp);
}
void deleteAtPostion(node *head, int pos)
{
    if (pos == 0)
    {
        deleteAtHead(head);
        return;
    }
    node *prev = head;
    int curr_pos = 0;
    while (curr_pos != pos - 1)
    {
        prev = prev->next;
        curr_pos++;
    }
    // prev is pointing to pos-1 now prev will point to pos +1
    node *temp = prev->next;
    prev->next = prev->next->next;
    free(temp);
}
// void reverseAll(node* head)
// {
//     if(head==NULL){
//         return;
//     }
// }
bool detectCycle(node* &head){
    node * slow=head;
    node * fast=head;

}
int main()
{
    node *head = NULL;
    insertAtHead(head, 2);
    printNode(head);
    insertAtHead(head, 3);
    printNode(head);
    insertAtTail(head, 19);
    printNode(head);
    insertAtPositon(head, 2, 11);
    printNode(head);
    updateAtPosition(head, 2, 13);
    printNode(head);
    deleteAtHead(head);
    printNode(head);
    deleteAtEnd(head);
    printNode(head);
    insertAtPositon(head, 2, 1);
    insertAtPositon(head, 2, 4);
    insertAtPositon(head, 2, 10);
    printNode(head);
    deleteAtPostion(head, 2);
    printNode(head);
}