#include<stdio.h>
#include<stdlib.h>
#include "header.h"

int main(void)
{
    Stack s;
    InitStack(&s, 100);
    
    Push(&s, 5);
    Push(&s, 4);
    Push(&s, 3);
    Push(&s, 2);
    Push(&s, 1);
    PrintStack(&s);

    Pop(&s);
    PrintStack(&s);

    FreeStack(&s);
    return 0;
}