#include<stdio.h>
#include<stdlib.h>

typedef struct student {
	int id;
	struct student *next;
}std;

std *createnode(void) {
	std *n=NULL;
	n=(std *)malloc(sizeof(std));
	printf("enter data: ");
	scanf("%d",&n->id);
	n->next=NULL;
	return n;
}

void traverse(std *h) {
	while(h!=NULL)	{
		printf("%d-->",h->id);
		h=h->next;
	}
	printf("\n");
}

std *push(std *head) {			//push
	std *new=NULL;
	new=createnode();
	if(head==NULL)
		head=new;
	else 
		new->next=head;
	head=new;
	printf("push done!\n");
	return head;
}

std *pop(std *head) {			//pop
	std *temp=NULL;
	if(head!=NULL) {
		temp=head;
		head=head->next;
		free(temp); 
		printf("pop done!\n");
	}
	else
		printf("EMPTY\n");
	return head;
}

int main() {
	std *head=NULL,*last=NULL,*new=NULL;
	char ch='y';
	int a;
	while(ch!='n') {
		printf("\nenter 1 for push\nenter 2 for pop\nenter 3 for traverse\n");
		scanf("%d",&a);
		switch(a) {
			case 1: head=push(head);break;
			case 2: head=pop(head);break;
			case 3: traverse(head);break;
			default : break;
		}
		printf("do you want to continue: ");
		scanf(" %c",&ch);
	}
}