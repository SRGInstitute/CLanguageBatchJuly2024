#include<stdio.h>
#include<stdlib.h>

typedef struct Node {
	 int data;
	  Node *link;
};

Node* addAtBeg(Node *start,int data) {
Node*temp=( Node *)malloc(sizeof(Node));
temp->data=data;
start=temp;
temp->link=NULL;
return start;
}

Node* addAtend(Node *start,int data) { 
	Node *tmp,*p;
   p=start;
   tmp = (Node *) malloc(sizeof( Node));
   tmp->data = data;
   
   while(p->link != NULL) {
	   p = p->link;
   }
   
   p->link = tmp;
   tmp->link = NULL;
   
   return start;
}

        int main () {
		int n,a,sn,searchnode, count=0;
		Node * start,*tempPtr = NULL;
		printf("enter the number of nodes\n");
		scanf("%d",&n);
		
		// Value insertion logic
			start = addAtBeg(start,5);
		for(int i=2; i<=n; i++) {
			start = addAtend(start,5*i);
		}
		
        // Value to be printed;
		tempPtr = start;
		while(tempPtr != NULL) {
			printf("%d\t\n",tempPtr->data);
            count = count+1;
			tempPtr = tempPtr->link;
        }
printf(" total number of node is : %d\t\n",count);
       tempPtr = start;
printf("enter the number to search nodes\n");
		scanf("%d",&sn);
     	while(tempPtr != NULL) {
			if(sn==tempPtr->data)
			{
				printf("yes");
				break;
			}

			tempPtr = tempPtr-> link;
	    }
         return 0;
			}