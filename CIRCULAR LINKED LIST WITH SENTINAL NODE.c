#include <stdio.h>
#include <malloc.h>
#include <stdlib.h>
struct node
{
    char data;
    struct node *next;
};
typedef struct node NODE;
/*NODE is a Variable Which Stores Struct node
data Type Data... We're using Typedef to Give a Name
of Struct node*/

NODE *sentinal,*head,*newnode, *temp= NULL;
int menu();//First of All Menu will show
void createlist();
void display();
void deletion_from_begining ();
int main()
{

    int option;
    while (1)
    {
        option = menu();
        //n will store the Option we Choose
        switch (option)
        {
        case 1:
        {
            createlist();//If we Choose 1 it'll Call Create List
            break;
        }
        case 2:
        {
            display();
            printf(" go to the sentinal node");
            break;
        }
        case 3:
        {
            deletion_from_begining ();
            break;
        }
        case 4:
        {
            printf("\nExiting ...");
            exit(0);
        }

        default:
        {
            printf("\nInvalid choice\n");
        }
        }
    }
}


int menu()
{
    int option;
    printf("\n\n1. Circular Linked list Creation\n");
    printf("\n2. Display the list\n");
    printf("\n3. Deletion from Beginning\n");
    printf("\n4. Exit!!!! ");
    printf("\nEnter option: ");
    scanf("%d", &option);
    return option;
}

void createlist()
{
    int choice=1;
    sentinal = (NODE *)malloc(sizeof(NODE));
    /*Size of Function will let us know how much space we need
    to create a Node.
    Malloc Function will Allocate Space in the Computer
    We store the Address in Sentinal.. Sentimental will tell us the Address*/
    printf("\nMemory address for sentinal node: %d\n", sentinal);
    sentinal->data = '#'; //initialized
    sentinal->next=NULL;//Null cause at first the List is Empty
    printf("\nData of sentinal: %c\n", sentinal->data);

    while (choice)//Infinite loop.. it'll stop when Choice=0
    {
        newnode = (NODE *)malloc(sizeof(NODE));
        printf("\nMemory address: %d", newnode);
        printf("\nEnter a Character : ");
        fflush(stdin);
        scanf("%c", &newnode->data);
        newnode->next = NULL;
        if (head == NULL)
        {
            temp=head = newnode;
        }
        else
        {
            temp->next = newnode;
            temp = newnode;
        }
            printf("\nDo you wish to continue? If YES type 1, for no type 0\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
    }
    sentinal->next = head;
    newnode->next = sentinal;  //last node pointer
}

void display()
{

    temp = sentinal;
    printf("\nThe contents of list\n");
    if (sentinal == NULL)
    {
        printf("\nEmpty List");
    }
    else
    {
        do
        {
            printf("[%c][%d]-->", temp->data, temp->next);
            temp = temp->next;
        } while (temp != sentinal);

    }
}
void deletion_from_begining ()
{
    if(sentinal==NULL)
        printf("The List is Empty....");
    else
    {
        sentinal= temp;
        temp->next=temp->next->next;
        // free(temp);
        printf("%d Has Been Deleted",temp->next);
    }
}
