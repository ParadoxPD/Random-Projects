//insertion in double linked list

#include<stdio.h>
#include<malloc.h>

struct Node
{
    int info;
    struct Node *left,*right;
};
typedef struct Node node;

node* create(node *);
void preorder(node *);
void inorder(node *);
void postorder(node *);

int main()

{
    node* root = (node*)malloc(sizeof(node));
    root = create(root);
    printf("PreOrder : ");
    preorder(root);
    printf("\n");
    printf("InOrder : ");
    inorder(root);
    printf("\n");
    printf("PostOrder : ");
    postorder(root);
    return 0;
}

node* create(node * root)
{
    node *ptr = NULL,*leftPtr,*rightPtr,*temp;
    ptr = root;+
    ptr -> info = 2;

    temp = (node*)malloc(sizeof(node));
    temp -> info = 7;
    temp->left = NULL;
    temp->right=NULL;
    ptr -> left = temp;

    temp = (node*)malloc(sizeof(node));
    temp -> info = 5;
    temp->left = NULL;
    temp->right=NULL;
    ptr -> right = temp;

    leftPtr = ptr->left;
    temp = (node*)malloc(sizeof(node));
    temp -> info = 2;
    temp->left = NULL;
    temp->right=NULL;
    leftPtr ->left = temp;

    temp = (node*)malloc(sizeof(node));
    temp -> info = 6;
   temp->left = NULL;
    temp->right=NULL;
    leftPtr ->right = temp;

    leftPtr = leftPtr->right;
    temp = (node*)malloc(sizeof(node));
    temp -> info = 5;
    temp->left = NULL;
    temp->right=NULL;

    leftPtr -> left = temp;
    temp = (node*)malloc(sizeof(node));
    temp -> info = 11;
    temp->left = NULL;
    temp->right=NULL;
    leftPtr -> right = temp;

    rightPtr = ptr ->right;
    temp = (node*)malloc(sizeof(node));
    temp -> info = 9;
    temp->left = NULL;
    temp->right=NULL;;
    rightPtr->right = temp;

    rightPtr = rightPtr -> right;
    temp = (node*)malloc(sizeof(node));
    temp -> info = 4;
    temp->left = NULL;
    temp->right=NULL;;
    rightPtr->left = temp;

    return root;


}

void preorder(node *root)
{
    if(root == NULL)
        return;

    printf("%d ",root->info);
    preorder(root->left);
    preorder(root->right);

}


void inorder(node *root)
{
    if(root == NULL)
        return;

    inorder(root->left);
    printf("%d ",root->info);
    inorder(root->right);

}

void postorder(node *root)
{
    if(root == NULL)
        return;

    postorder(root->left);
    postorder(root->right);
    printf("%d ",root->info);

}
