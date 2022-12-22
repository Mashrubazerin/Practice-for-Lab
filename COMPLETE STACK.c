#include <stdio.h>

int MAXSIZE = 8;
char stack[8];
int top = -1;
char pop()
{
    char data;

    if(top==-1)
    {
        printf("Stack is empty");
    } else {
        data = stack[top];
        top = top - 1;
        return data;
    }
}

char push(char data)
{

    if(top==MAXSIZE)
    {
        printf("Overflow\n");
    }
    else
    {
        top = top + 1;
        stack[top] = data;
    }
}
void main() {
    int i;
    // push items on to the stack
    push('o');
    push('g');
    push('n');
    push('z');
    pop();
    push('a');
    push('f');
    pop();
    push('m');
    // print stack data
    for(i=top; i>=0; i--)
        printf("%c\n",stack[i]);
}
