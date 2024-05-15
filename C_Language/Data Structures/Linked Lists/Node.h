#include<stdio.h>

/*Function declarations*/
struct student *nodeCreation();
void Traversal(struct student *);
void InsertPos(struct student **, int );  
void InsertbeforeKey(struct student **, int ); 
void InsertafterKey(struct student **, int );
void deleteNodePos(struct student **,int );
void deleteNodekey(struct student **,int );
