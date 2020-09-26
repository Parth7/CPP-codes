#include<stdio.h>
#include<stdlib.h> 
struct node {

	int value;
	struct node *next;
}; 
int count=0;
typedef struct node node;

void insert(node *head,int num){ 
	while (head->next != NULL) { 

		head = head->next;
	}

	head->next = (node *)malloc(sizeof(node));
	head = head->next;
	head->value = num;
	head->next = NULL;
}

void print(node *head){
 
	while (head->next != NULL) { 

		printf("%d->",head->value);
		head = head->next;
	}

	printf("%d\n",head->value);
}

int search ( struct node *head , int d){		
//	head->next;
	if ( head==NULL){
		//printf( "%%" );
		return count ; 
	}
	if ( head->value == d ){
		count=count+1;
		//printf( "^^" );
		search( head->next, d );
	}else{
		search ( head->next , d );
	}
}
int main() {

	node *head;
	int n,s,x;
	int i;
	int num;

	scanf("%d",&n);
	head = (node *)malloc(sizeof(node));
	scanf("%d",&head->value);
	head->next = NULL;

	for (i = 1; i < n; i++) {

		scanf("%d",&num);
		insert(head,num);
	}

	print(head);
	scanf( "%d", &x );
	s=search( head,x );
	printf( "%d\n", s );
	return 0;
}
