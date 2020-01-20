#include <stdio.h>
#include <stdlib.h>

struct node{	
	int data;
	struct node * next;
	struct node *root;
};

int pop(struct node*);
struct node *push(struct node *,int data);

int pop(struct node*root){
	if(root==NULL){
		printf("Stack is empty!\n");
			return -1;
	}
	
	else{
		struct node* iter=root;
		iter=iter->next;
		struct node *temp=iter->next;
		int rvalue=temp->data;
		iter->next=NULL;
		free(temp);
		
			return rvalue;
	}
	/*while(iter->next->next!=NULL)
		iter=iter->next;
		struct node *temp=iter->next;
		int rvalue=temp->data;
		iter->next=NULL;
		free(temp);
		
			return rvalue;
	*/
}

void write(struct node * r){
	while(r!=NULL){
			printf("%d\n",r->data);
			r=r->next;
			r->next->next=NULL;     
	}
}

struct node *push(struct node *root,int a){
	if(root==NULL){
		root=(struct node*)malloc(sizeof(struct node));
		root->data=a;
		root->next=NULL;
		return root;
	}
	
	struct node*iter=root;
	
	while(iter->next !=NULL){
		iter->next=NULL;
		struct node*temp=(struct node*)malloc(sizeof(struct node));
		temp->data=a;
		temp->next=NULL;
		iter->next=temp;
		return root;
	}
}

int main(){
	struct node *s=NULL;
	s=push(s,20);
	s=push(s,30);
	write(s);
	
 		return 0;
}
