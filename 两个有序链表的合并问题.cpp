List Merge( List L1, List L2 )
{
    List pb1=L1;
    List pb2=L2;
    List head=NULL;
    pb1=pb1->Next;
    pb2=pb2->Next;
    head=(List)malloc(sizeof(struct Node));
    List pb3=head;
    while(pb1&&pb2)
    {
        if(pb1->Data<=pb2->Data)
        {
           pb3->Next=pb1;
            pb1=pb1->Next;
        }
        else if(pb2->Data<pb1->Data)
        {
            pb3->Next=pb2;
            pb2=pb2->Next;
        }
        pb3=pb3->Next;
    }
    if(pb1==NULL)
    {
        pb3->Next=pb2;
    }
    else
    {
        pb3->Next=pb1;
    }
    L1->Next=NULL;
    L2->Next=NULL;
        return head;
}
