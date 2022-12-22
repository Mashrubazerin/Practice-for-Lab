#include<stdio.h>
#include<malloc.h>
#include<stdlib.h>
struct node
{
    int data;
    int flag;
    struct node *next
    };
typedef struct node node;
node *head=0,*temp=0,*newnode=0,*firstnode=0;
int main()
{
    firstnode=(node*)malloc(sizeof(node));
    printf("Adress of head node %d\n",firstnode);
firstnode->flag=1;
printf("Enter data of first node : \n");
scanf("%d",&firstnode->data);
    int choice=1;
    while(choice)
    {
        newnode=(node*)malloc(sizeof(node));
        printf("Adress of new node %d\n",newnode);
        newnode->flag=0;
        printf("Enter the data \n");
        scanf("%d",&newnode->data);
        if(head==0)
        {
            head=temp=newnode;
        }
        else
        {
            temp->next=newnode;
            temp=newnode;
        }

        printf("Press 0 to exit\n");
        scanf("%d",&choice);

    }
    firstnode->next=head;
    newnode->next=firstnode;
    temp=firstnode;

    do
    {
        printf("[%d] [%d] [%d]-->",temp->flag,temp->data,temp->next);
        temp=temp->next;
    }while(temp!=firstnode);
    printf("goto first");

}
