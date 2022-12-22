#include <stdio.h>
#include<malloc.h>
#include <stdlib.h>
struct node
{
    int data;
    struct node *next;
};
typedef struct node node;
node *head=0,*temp=0,*newnode=0;
int main()
{
    int choice=1;
    while (choice)
    {
        newnode=( node*)malloc(sizeof( node));
        printf("Enter the data uh wanna insert  :");
        scanf("%d",&newnode->data);
        newnode->next=0;
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }
        printf("Press 1 to continue & press 0 to Exit\n");
        scanf("%d",&choice);
    }
    temp->next=0;
    temp=head;
    do
    {
        printf("[%d]-->[%d]",temp,temp->data);
        temp=temp->next;
    }while(temp!=0);
}
