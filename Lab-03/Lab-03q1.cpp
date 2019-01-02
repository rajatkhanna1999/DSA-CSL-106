// Complete the mergeLists function below.

/*
 * For your reference:
 *
 * SinglyLinkedListNode {
 *     int data;
 *     SinglyLinkedListNode* next;
 * };
 *
 */
SinglyLinkedListNode* mergeLists(SinglyLinkedListNode* head1, SinglyLinkedListNode* head2) {
 SinglyLinkedListNode* temp1=head1;
 SinglyLinkedListNode* temp2=head2;
 SinglyLinkedListNode* head=NULL;
 SinglyLinkedListNode* temp=NULL;
    while(temp1!=NULL && temp2!=NULL)
    {
        if(head==NULL)
        {
            if(temp1->data<temp2->data){
                head=temp1;
                temp=head;
                temp1=temp1->next;
            }
            else{
                head=temp2;
                temp=head;
                temp2=temp2->next;
            }
        }
        else
        {
            if(temp1->data<temp2->data){
              temp->next=temp1;
              temp=temp1;
              temp1=temp1->next;
            }
            else
            {
              temp->next=temp2;
              temp=temp2;
              temp2=temp2->next; 
            }
            
        }
            
    }
    while(temp1!=NULL)
    {
        temp->next=temp1;
        temp1=temp1->next;
        temp=temp->next;
    }
    while(temp2!=NULL)
    {
        temp->next=temp2;
        temp2=temp2->next;
        temp=temp->next;
    }
  return head;
}
