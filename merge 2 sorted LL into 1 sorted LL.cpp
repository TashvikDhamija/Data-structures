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
    SinglyLinkedListNode* newHead, *p=head1,*q= head2, *s;
    
    if(p==NULL){return q;} 
    if(q==NULL){return p;}
    if(p != NULL && q != NULL){
        if(p->data<=q->data){
            s=p;
            p=p->next;
        }
        else{
            s=q;
            q=q->next;
        }
        newHead = s;
    }
    while(p != NULL && q != NULL){
        if(p->data<=q->data){
            s->next=p;
            s=p;
            p=p->next;
        }
        else{
            s->next=q;
            s=q;
            q=q->next;
        }
    }
    if(p==NULL){s->next=q;} 
    if(q==NULL){s->next=p;}

    return newHead;

}
