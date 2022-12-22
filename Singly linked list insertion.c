#include<stdio.h>
#include<stdlib.h>
#include<conio.h>

// Function declaration
void at_beginning();
void at_end();
void after_position();
void display();

struct node // define the node
{
    int data;
    struct node *next;
};

struct node *head, *newnode, *temp;
// Main Function
int main()
{
    int choice = 1;
    head = 0;
    int count = 0;
    int a;
    while(choice)
    {
        newnode=(struct node *)malloc(sizeof(struct node));//malloc means the 1st adress of memory
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
        printf("Do you want to continue(0,1)?\n");// 0 mean No and 1 mean Yes
        scanf("%d",&choice);
    }
    temp = head;// this is most important to declare
    while(temp != 0)
    {
        temp = temp -> next;
        count++; // count as a length
    }
    printf("Which operation do you want to perform?\n press1----Insert at the beginning\n press2 ---- Insert at the end\n press3----Insert at specific position\n press4----To display the Linked List\n");
    scanf("%d",&a);

    switch (a)
    {
    case 1:
        at_beginning();
        display();
        break;
    case 2:
        at_end();
        display();
        break;

    case 3:
        after_position(count);
        display();
        break;
    case 4:
        display();
        break;
    }
    return 0;
 }
// Function
void at_beginning()
{
    newnode = (struct node *)malloc(sizeof(struct node));
    printf("Enter data you want to insert at beginning:\n");
  scanf("%d",&newnode -> data);
  newnode -> next = head;
  head = newnode;
}

void at_end()
{
  newnode = (struct node *)malloc(sizeof(struct node));
  printf("Enter data you want to insert at end:\n");
  scanf("%d",&newnode -> data);
  newnode -> next = 0;
  temp = head;
  while(temp -> next != 0) // Temp!=0 thats not fulfil the condiition. Cause last moment temp = 0, than its not point any address
  {
    temp = temp -> next;
  }
  temp  -> next = newnode;
}

void after_position(int count)
{
  int pos, i = 1;
  printf("Enter the position you want to insert:\n");
  scanf("%d",&pos);
  if(pos > count)
  {
    printf("Invalid Position");
  }
  else
  {
    temp = head;
    while(i < pos)//before position while(i < pos-1)
    {
      temp = temp -> next;
      i++;
    }
    newnode = (struct node *)malloc(sizeof(struct node));
        printf("Enter data you want to insert at position:\n");
      scanf("%d",&newnode -> data);
    newnode -> next = 0;
    newnode -> next = temp -> next;
    temp -> next = newnode;
  }
}

// Printing The Linked List
void display()
{
  temp = head;
  printf("Your Linked List:\n");
  while(temp != 0)
  {
    printf("%d\t",temp -> data);
    temp = temp -> next;
  }
  getch();
}
