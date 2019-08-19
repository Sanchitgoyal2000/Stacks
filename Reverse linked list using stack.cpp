struct Node* reverselist(Node *head)
{
 stack<struct Node*>s;
 struct Node *temp=(struct Node *)malloc(sizeof(struct Node));
 temp=head;
 while(temp->next!=NULL)
 {
  s.push(temp);
  temp=temp->next;
 }
 head=temp;
 while(!s.empty())
 {
  temp->next=s.top();
  temp=s.top();
  s.pop();
 }
 temp->next=NULL;
 return head;
}
