#include<stdio.h>
#include<stdlib.h>
#include "newll.h"
int main()
{
    int choice;
    while (1)
    {
        printf("\t1  For insertion at"
               " starting\n");
        printf("\t2  For deletion at"
               " end\n");
	printf("\t3 For traversing\n");
       	printf("\t4 To exit\n");
        printf("\nEnter Choice :\n");
        scanf("%d", &choice);
 
        switch (choice) 
	{
        case 1:
            insert();
            break;
        case 2:
            delete();
            break;
	 case 3:
	    traverse();
	    break;
	 case 4:
            exit(1);
            break;
        default:
            printf("Incorrect Choice\n");
        }
    }
    return 0;
}
