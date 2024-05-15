#include<stdio.h>
#include<stdlib.h>

struct student{
    int ID;
    struct student *next;
};

struct student *nodeCreat();
void Sort(struct student * );

int main(){
    struct student *head=NULL,*new=NULL,*tail=NULL;
    char ch='A';
    while(1){
        while(ch!='n'){
            printf("enter char:");
            scanf(" %c",&ch);
            new = nodeCreat();
            printf("enter ID:");
            scanf("%d",&new->ID);
            if(head == NULL)
                head = new;
            else
                tail->next = new;
            tail = new;
        }
        break;
    }
    printf("exit while in main\n");
    Sort(head);
    return 0;
}

struct student *nodeCreat(){
    struct student *new=(struct student *)malloc(sizeof(struct student));
    new->next=NULL;
    return new;
}

void Sort(struct student *Head){
    printf("Sort enter\n");
    struct student *tempHead = Head, *last=NULL;
    int status=1,temp;
    
    if(tempHead==NULL){
        printf("Head Null");
            return;
    }
    do{
        status = 0;
        tempHead = Head;
        while(tempHead->next != last){
            if(tempHead->ID > tempHead->next->ID){
                temp = tempHead->ID;
                tempHead->ID = tempHead->next->ID;
                tempHead->next->ID = temp;
                status = 1;
            }
            tempHead = tempHead->next;
        }
        last = tempHead;
    }while(status);

    //Travers(tempHead);
    printf(":::::::LISt is :::::::::::\n");
    while(Head!=NULL){
        printf("%d, ",Head->ID);
        Head = Head->next;
    }
}