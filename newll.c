#include <stdio.h>
#include<string.h>
#include"newll.h"
#include <stdlib.h>
// Linked List Node
struct node {
    int info;
    char Name[20];
    char gen[20];
    struct node* link;
};
struct node* start = NULL;
void traverse()
{
    struct node* temp;
 
    // List is empty
    if (start == NULL)
        printf("\nList is empty\n");
 
    // Else print the LL
    else {
        temp = start;
        while (temp != NULL) {
            printf("id = %d\n", temp->info);
	    
	    printf("name=%s\n",temp->Name);
	
	    printf("Gender = %s\n", temp->gen);
	   
            temp = temp->link;
        }
    }
}
void insert()
{
    int data;
    char ch[20];
    char Gen[20];
    struct node* temp;
    temp = malloc(sizeof(struct node));
    printf("\nEnter number to be inserted : ");
    scanf("%d", &data);
    
    getchar(); 
    temp->info = data;
    
    printf("enter gender");
   
    fgets(Gen, 20, stdin);
    strcpy(temp->gen,Gen);
    printf("enter name of the person");
    fgets(ch,20,stdin);
    strcpy(temp->Name,ch);
    temp->link = start;
    start = temp;
}
void delete()
{
    struct node* temp;
    if (start == NULL)
        printf("\nList is empty\n");
    else {
        temp = start;
        start = start->link;
        free(temp);
    }
}
