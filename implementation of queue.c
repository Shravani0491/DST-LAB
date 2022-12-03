#include<stdio.h>
#include<stdlib.h>
#define size 3
void insert();
void delete();
void display();
int queue[size],rear=-1,front=-1;
void main()
{
    int choice;
    while(1)
    {
        printf("\n1.Insert 2.Delete 3.Display 4.Exit");
        printf("\nEnter your choice:");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:insert();
                   break;
            case 2:delete();
                   break;
            case 3:display();
                   break;
            case 4:exit(0);
                   break;
            default:printf("\nInvalid Choice");
        }
    }
    getch();
}

void insert()
{
    if(rear==size-1)
    {
        printf("\nQueue is full");
    }
    else
    {
        if(front==-1)
        front=0;
        int item;
        printf("\nEnter the element:");
        scanf("%d",&item);
        rear=rear+1;
        queue[rear]=item;
    }
}

void delete()
{
    if(front==-1||front>rear)
    {
        printf("\nQueue is empty");
    }
    else
    {
        int x;
        x=queue[front];
        if(front==rear)
        {
            front=-1;
            rear=-1;
        }
        else
        {
           front=front+1;
        }

        printf("\nPopped element=%d",x);
    }
}

void display()
{
    int i;
    if(front==-1)
    {
        printf("\nQueue is empty\n");
    }
    else
    {
        printf("\nQueue contains:");
        for(i=front;i<=rear;i++)
        printf("%d\n",queue[i]);
    }
}
