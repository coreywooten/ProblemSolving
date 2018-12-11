#include<stdio.h>
#include<iostream>
#include<cstdio>
#include<cstring>
#include<cmath>


using namespace std;

struct Node
{
    int data;
    struct Node* next;
};

void insert(Node** head,int val)
{
    struct Node* new_node=(struct Node*) malloc(sizeof(Node));
    new_node->data=val;
    new_node->next=(*head);
    *head=new_node;
}

void printing(Node* head,int k)
{
    int ct=0;
    while(head!=NULL)
    {
        ct++;
        if(ct>=k)
        {
            cout<<head->data<<" ";
        }
        head=head->next;
    }
    cout<<endl;
}
int main()
{
    cout<<"Enter number of elements in the linked list: ";
    int n;
    cin>>n;
    Node* head=NULL;
    for(int i=1;i<=n;i++)
    {
        int k=rand();
        insert(&head,k);
        
    }
    cout<<"Enter the value of k: ";
    int k;
    cin>>k;
    printing(head,k);
    return 0;
    
}

