/* C Program to Implement a Queue using an Array

Name: Mashruba Sultana Zerin
ID:-221-35-885*/
#include <stdio.h>
# define N 5
void enqueue();
void dequeue();
void show();
int inp_arr[N];
int Rear = - 1;
int Front = - 1;
main()
{
    int ch;
    while (1)
    {
        printf("1.Enqueue Operation\n");
        printf("2.Dequeue Operation\n");
        printf("3.Display the Queue\n");
        printf("4.Exit\n");
        printf("Enter your choice of operations : ");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            enqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            show();
            break;
        case 4:
            exit(0);
        default:
            printf("Incorrect choice \n");
        }
    }
}
void enqueue()
{
    int insert_item;

    if (Front == - 1)
    {
        Front=Rear = 0;
        printf("Element to be inserted in the Queue\n : ");
        scanf("%d", &insert_item);
        inp_arr[Rear] = insert_item;
    }
    else if ((Rear+1)%N==Front)
    {
        printf("Can't Insert...Queue is Overflow \n");
    }
    else
    {
        printf("Element to be inserted in the Queue\n : ");
        scanf("%d", &insert_item);
        Rear = (Rear + 1)%N;
        inp_arr[Rear] = insert_item;

    }
}

void dequeue()
{
    if (Front == - 1 && Rear==-1)
    {
        printf("Underflow \n");
        return ;
    }
    else if(Front==Rear)
    {
        Front=Rear=-1;
    }
    else
    {
        printf("Element deleted from the Queue: %d\n", inp_arr[Front]);
        Front = (Front + 1)%N;
    }
}

void show()
{
    int i=Front;
    if (Front == - 1)
        printf("Empty Queue \n");
    else
    {
        printf("Queue Items: \n");
        while(i!=Rear)
        {
            printf("%d ", inp_arr[i]);
            i=(i+1)%N;
        }
        printf("%d",inp_arr[Rear]);
        printf("\n");
    }
}
