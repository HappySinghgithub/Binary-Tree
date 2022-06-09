#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node * left;
	struct node * right;
};
struct node * createNode(int data)
{
	struct node *n;
	n = (struct node *)malloc(sizeof(struct node));
	n->data=data;
	n->left=0;
	n->right=0;
	return n;
}
void preOrder(struct node *root)
{
	if(root!=0)
	{
		printf("%d ",root->data);
		preOrder(root->left);
		preOrder(root->right);
	}
}
int main()
{              clrscr();
	struct node *p=createNode(2);
	struct node *p1=createNode(1);
	struct node *p2=createNode(5);
	struct node *p3=createNode(3);
	struct node *p4=createNode(0);
	struct node *p5=createNode(6);
	struct node *p6=createNode(9);
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	p2->right=p5;
	p5->left=p6;
	preOrder(p);
	getch();
	return 0;
}