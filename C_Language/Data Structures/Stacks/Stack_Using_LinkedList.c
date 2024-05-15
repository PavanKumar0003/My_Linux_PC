#include<stdio.h>
#include<stdlib.h>

struct student
{
    int ID;
    struct student *next;
};

void Traversal(struct student *T);
struct student *nodeCreation();
void push(struct student **);
void pop(struct student **);

int main()
{
    char ch;
    struct student *Head=NULL,*new=NULL,*Tail=NULL;
    int select;

    while(1)
    {
        printf("\t\t::::::::::Enter Stacking::::::::::\n");
        printf("\t\t1.Push\n");
        printf("\t\t2.Pop\n");
        printf("\t\t3.Exit\n");
        printf("Enter our choice:");
        scanf("%d",&select);

        switch(select)
        {
            case 1:
                    push(&Head);
                Traversal(Head);
                break;
            case 2:
                    pop(&Head);
                    Traversal(Head);
                break;
            case 3:
                goto Exit;
                break;
            default:
                break;
        }
    }
    Exit:printf("............Thank you............ \n");
        return 0;
}

struct student *nodeCreation()
{
    struct student *new=NULL;
    new = (struct student*)malloc(sizeof(struct student));
    new->next =NULL;
    return new;
}


void Traversal(struct student *T)
{
    printf("\n::::List is::::\n");
    while(T)
    {
        printf("%d|",T->ID);
        T=T->next;
    }
}

void push(struct student **Head)
{
    struct student *new,*Tail=NULL;
    new = nodeCreation();
    printf("Enter ID Value:");
    scanf("%d",&new->ID);
    new->next=NULL;
    if(*Head == NULL)
        *Head = new;     //make new Head
    else
        Tail->next = new;       //copy new' address to Tail
    Tail = new;
    printf("Pushed Value:%d\n",Tail->ID);
    printf("Array:");
 }

 void pop(struct student **Head)
{
    struct student *temp=NULL,*tempHead=*Head;
    // printf("Popped Value:%d\n",Tail->ID);
    if(*Head == NULL)
        printf("Stack is Empt\n");
    else
    {
        while(tempHead->next!=NULL)
        {
            printf("Stack is not Empt\n");
            temp = tempHead;
            tempHead = tempHead->next;
        }
        printf("Popped HeadValue:%d\n",tempHead->ID);
        temp->next=NULL;
        free(tempHead);
    }
}

// void DisplayValues(int a[])
// {
//     for(int i=0;i<SIZE;i++)
//     {
//         printf("%d|",a[i]);
//     }
//     printf("\n");
// }