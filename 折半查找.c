typedef int Position;
typedef struct LNode *List;
typedef int ElementType;
#define MAXSIZE 10
struct LNode {
    ElementType Data[MAXSIZE];
    Position Last; /* 保存线性表中最后一个元素的位置 */
};
Position BinarySearch( List L, ElementType X )
{
    List pb= L;
    int example=X;
    int low=1;
    int high=pb->Last;
    int mid=0;
    while(high>=low)
    {
        mid=(high+low)/2;
        if(example>pb->Data[mid])
        {
            low=mid+1;
        }
        else if(example<pb->Data[mid])
        {
            high=mid-1;
        }
        else if(example==pb->Data[mid])
        {
            return mid;
        }
    }
    return 0;
}
