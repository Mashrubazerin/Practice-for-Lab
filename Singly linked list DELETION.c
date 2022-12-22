#include<stdio.h>
#include<conio.h>
#include<stdlib.h>

void del_at_beg();
void del_at_end();
void del_any_pos();
void display();

struct node
{
    int data;
    struct node *next;
};

struct node *head,*newnode,*temp,*prevnode,*nextnode;

int main()
{
    int choice = 1;
    int a;
    head = 0;
    while(choice)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data for linked list:\n");
        scanf("%d",&newnode -> data);

        newnode -> next = 0;

        if(head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp -> next = newnode;
            temp = newnode;
        }
        printf("Do you want to continue(0,1)?\n");
        scanf("%d",&choice);
    }
    temp = head;
    printf("Which operation do you want perform?\npress1----Delete At Beginning\npress2----Delete At End\npress3----Delete Any Position\npress4----To Display Linked List\n");
        scanf("%d",&a);

        switch (a)
        {
            case 1:
            del_at_beg();
            display();
            break;

            case 2:
            del_at_end();
            display();
            break;

            case 3:
            del_any_pos();
            display();
            break;

            case 4:
            display();
            break;
        }
    return 0;
}

void del_at_beg()
{
    if(head == 0)
    {
        printf("List Is Empty");
    }
    else
    {
        head = temp;
        head = head -> next;
        free(temp);
    }
}

void del_at_end()
{
    temp = head;
    while (temp -> next != 0)
    {
        prevnode = temp;
        temp = temp -> next;
    }
    if(temp == head)
    {
        head = 0;
    }
    else
    {
        prevnode -> next = 0;
    }
    free(temp);
}

void del_any_pos()
{
    temp = head;
    int i = 1;
    int pos;
    printf("Enter the position you want to delete:\n");
    scanf("%d",&pos);

    while(i<pos - 1)
    {
        temp = temp -> next;
        i++;
    }
    nextnode = temp -> next;
    temp -> next = temp -> next -> next; // temp -> next = nextnode -> next doesn't work.Maybe i delete nextnode so that doesn't help temp to linked other node.
    free(nextnode);
}

void display()
{
    temp = head;
    printf("Your Linked List:\n");
    while(temp != 0)
    {
        printf("%d\t",temp -> data);
        temp = temp -> next;
    }
}
