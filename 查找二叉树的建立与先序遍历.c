//此程序将展示搜索二叉树的插入和遍历
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct bintree
{
    int wujunpu_number;
    struct bintree *left;
    struct bintree *right;
}BTR;//定义树的节点结构体
void print_help(void);//菜单打印函数
BTR *bintree_insert(BTR *wujunpu_bst,int x);//插入节点函数
void transerver_bintree(BTR *TreeNode);//先序遍历
int main()
{
    BTR *wujunpu_root=NULL;
    int wujunpu_commad=0;
    print_help();
    while(1)
    {
        printf("请输入指令前面的序号：");
        scanf("%d",&wujunpu_commad);
        if(wujunpu_commad==1)
        {
            printf("请输入您需要插入的值：");
            int wujunpu_example=0;
            scanf("%d",&wujunpu_example);
            wujunpu_root=bintree_insert(wujunpu_root,wujunpu_example);
            printf("插入完毕！\n");
        }
        else if(wujunpu_commad==2)
        {
            transerver_bintree(wujunpu_root);
            printf("遍历完毕！\n");
        }
        else if(wujunpu_commad==3)
        {
            return 0;
        }
        else if(wujunpu_commad==4)
        {
             print_help();
        }
    }
    return 0;
}
void print_help(void)
{
    printf("1.插入\n");
    printf("2.先序遍历\n");
    printf("3.退出程序\n");
    printf("4.打印此菜单\n");

}
BTR *bintree_insert(BTR *wujunpu_bst,int x)//插入函数
{
    if(!wujunpu_bst)
    {
        wujunpu_bst=(BTR *)malloc(sizeof(BTR));
        wujunpu_bst->left=NULL;
        wujunpu_bst->right=NULL;
        wujunpu_bst->wujunpu_number=x;
    }
    else if(x>=wujunpu_bst->wujunpu_number)
    {
        wujunpu_bst->right=bintree_insert(wujunpu_bst->right,x);
    }
    else if(x<wujunpu_bst->wujunpu_number)
    {
        wujunpu_bst->left=bintree_insert(wujunpu_bst->left,x);
    }
    return wujunpu_bst;
}
void transerver_bintree(BTR *TreeNode)
{
    if(TreeNode)
    {
        printf("%d ",TreeNode->wujunpu_number);
        transerver_bintree(TreeNode->left);
        transerver_bintree(TreeNode->right);
    }
    return ;
}
