#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
struct node
{
	int data;
	struct node *left;
	struct node *right;
};
struct node *createnode(int data)
{
	struct node *n;
	n=(struct node *)malloc(sizeof(struct node));
	n->data=data;
	n->left=0;
	n->right=0;
	return n;
}
void postOrder(struct node *root)
{       if(root!=0)
	{
	postOrder(root->left);
	postOrder(root->right);
	printf("%d ",root->data);
	}
}
int main()
{
//	clrscr();
	struct node *p=createnode(1);
	struct node *p1=createnode(2);
	struct node *p2=createnode(3);
	struct node *p3=createnode(4);
	struct node *p4=createnode(5);
	struct node *p5=createnode(6);
	struct node *p6=createnode(7);
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	p2->right=p5;
	p5->left=p6;
	clrscr();
	postOrder(p);
    //	printf("\n");
	getch();
	return 0;
}