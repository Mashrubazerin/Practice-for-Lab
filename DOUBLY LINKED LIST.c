#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>

struct node
{
    int data;
    struct node*prev;
    struct node *next;
};

int count=0;
typedef struct node Node;
int pos;
int i=1;
Node *head, *temp, *newnode,*temp2 = 0;
void create();
void display();
/*void insertion_beg();
void insertion_at_any_pos();*/
int menu();
int main()
{
    int option;
    while (1)
    {
        option = menu();
        switch (option)
        {
        case 1:
        {
            create();
            break;
        }
        case 2:
        {
            display();
            break;
        }
        /*case 3:
        {
            insertion_beg();
            break;
        }

        case 4:
        {
            insertion_at_any_pos();
            break;
        }
        case 5:
        {
            exit(0);
            break;
        }*/
        default:
        {
            printf("Invaild choice");
        }
        }
    }
}
int menu()
{
    int option;
    printf("\n1.Creatlist\n");
    printf("\n2.Display\n");
    printf("\n3.insertion at the Beginning\n");
    printf("\n4.Insert at any Position\n");
    printf("\n5.Exittttt\n");
    scanf("%d", &option);
    return option;
}
void create()
{
    int choice = 1;
    while (choice)
    {
        newnode = (Node *)malloc(sizeof(Node));

        printf("The memory address of newnode %d \n", newnode);
        printf("Enter a data \n :");
        scanf("%d", &newnode->data);
        newnode->prev=0;
        newnode->next = 0;
        if (head == 0)
        {
            head = temp = newnode;
        }
        else
        {
            temp->prev=temp2;
            temp->next = newnode;
            newnode->prev=temp;
            temp2=temp;
            temp = newnode;
        }
        printf("Do uh want to continue? type 1 to continue & type 0 to Exit\n");
        scanf("%d", &choice);
    }

    temp->next = 0;
    temp = head;
}
void display()
{

    temp = head;
    temp = head;
    printf("[%d]--->[%d][%d]", temp, temp->prev, temp->data);
    temp=temp->next;
    while(temp != NULL) {
        printf("[%d]<--->[%d][%d]", temp, temp->prev, temp->data);
        temp = temp->next;
    }
    printf("[0]");
// upoer lekha ta add korte hobe.. temp=head karon.. protibar display korar por temp er value null hoye jai... tai temp=head korte hobe
    printf("\n %d counts",count);
}
