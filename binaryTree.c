#include <stdio.h>
#include <stdlib.h>

typedef struct treeNode
{
    char data;
    struct treeNode* leftChild;
    struct treeNode* rightChild;
}TreeNode;

TreeNode *createBitree()
{
    char c;
    TreeNode *T;

    scanf("%c",&c);
    if(c=='#'||(c=='/n'))
         T=NULL;
    else
    {
        T=(TreeNode *)malloc(sizeof(TreeNode));
        T->data=c;
        T->leftChild=createBitree();
        T->rightChild=createBitree();
    }
    return T;
}
void preTraversal(TreeNode *T)
{
    char data;
    if(T!=NULL)
    {
        data=T->data;
        printf("%c",data);
        preTraversal(T->leftChild);
        preTraversal(T->rightChild);
    }
}
void main()
{
    TreeNode *Tree;
    printf("create binary tree:");
    Tree=createBitree();
    printf("traversal tree!");
    preTraversal(Tree);
}
