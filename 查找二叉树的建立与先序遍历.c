//�˳���չʾ�����������Ĳ���ͱ���
#include<stdio.h>
#include<stdlib.h>
#include<string.h>
typedef struct bintree
{
    int wujunpu_number;
    struct bintree *left;
    struct bintree *right;
}BTR;//�������Ľڵ�ṹ��
void print_help(void);//�˵���ӡ����
BTR *bintree_insert(BTR *wujunpu_bst,int x);//����ڵ㺯��
void transerver_bintree(BTR *TreeNode);//�������
int main()
{
    BTR *wujunpu_root=NULL;
    int wujunpu_commad=0;
    print_help();
    while(1)
    {
        printf("������ָ��ǰ�����ţ�");
        scanf("%d",&wujunpu_commad);
        if(wujunpu_commad==1)
        {
            printf("����������Ҫ�����ֵ��");
            int wujunpu_example=0;
            scanf("%d",&wujunpu_example);
            wujunpu_root=bintree_insert(wujunpu_root,wujunpu_example);
            printf("������ϣ�\n");
        }
        else if(wujunpu_commad==2)
        {
            transerver_bintree(wujunpu_root);
            printf("������ϣ�\n");
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
    printf("1.����\n");
    printf("2.�������\n");
    printf("3.�˳�����\n");
    printf("4.��ӡ�˲˵�\n");

}
BTR *bintree_insert(BTR *wujunpu_bst,int x)//���뺯��
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
