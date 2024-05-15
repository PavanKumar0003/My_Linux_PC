#include<stdio.h>
#include<stdlib.h>
typedef struct student {
	int id;
	struct student *next;
}std;

std *head=NULL,*last=NULL,*new=NULL,*temp=NULL;

std *createnode() {
	std *n=NULL;
	n=(std *)malloc(sizeof(std));
	printf("enter the data: ");
	scanf("%d",&n->id);
	n->next=NULL;
	return n;
}
void traverse(std *h) {
	while(h!=NULL) {
		printf("%d-->",h->id);
		h=h->next;
	}
	printf("\n");
}

void enque(void) {
	new=createnode();
	if(head==NULL)
		head=new;
	else
		last->next=new;
	last=new;
	traverse(head);
	printf("enque done!\n");
	return ;
}
void deque(void) {
	if(head!=NULL) {
		temp=head;
		head=head->next;
		free(temp);
		printf("deque done!\n");
	}
	else
		printf("no elements found\n");
	traverse(head);
	return ;
}

int main() {
	int k;
	char ch='y';
	std *head=NULL,*last=NULL,*new=NULL,*temp=NULL;
	while(ch!='n') {
		printf("enter 1 for enque\nenter 2 for deque\n\n");
		scanf("%d",&k);
		switch(k) {
			case 1:	enque(); break;
			case 2: deque(); break;
			default: break;
		}
		printf("do you want to continue: ");
		scanf(" %c",&ch);
	}
	traverse(head);
}