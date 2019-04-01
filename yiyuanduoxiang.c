#include <stdio.h>
#include <stdlib.h>

typedef struct t
{
    int expo;
    int coef;
    struct t *next;
}item;

item *getNum(item *a,int cnt)
{
    
    a = (item *)malloc(sizeof(item)*cnt);
    for(int i = 0;i < cnt;i++)
    {
        scanf("%d %d",&a[i].expo,&a[i].coef);
    }
}

int insert(item *a, item all)
{
    item *b = a.next;
    int flag;
    if(!all.next)
    {
        all.next = a;
    }
    else{
        while(a->expo >.< b->expo)
        {

        }
    }
}

int main()
{
    item *a1,*a2;
    scanf("%d",&cnt1);
    getNum(a1,cnt1);
    scanf("%d",&cnt2);
    getNum(a2,cnt2);
    item result,*resEnd,sum,*sumEnd,*temp,traversal;
    int flag = 1;
    traversal = result;
    for(int i = 0;i < cnt1;i++)
    {
        for(int j = 0;j < cnt2 ;j++)
        {
            while(traversal.next)
            {
                if(a1[cnt1].expo+a2[cnt2].expo == traversal.expo)
                {
                    traversal.coef += a1[cnt1].coef*a2[cnt2].coef;
                    flag = 0;
                    break;
                }
                else{
                    traversal = *traversal.next;
                    flag = 1;
                }
            }
            if(flag)
            {
                temp = (item *)malloc(sizeof(item));
                temp->coef = a1[cnt1].coef*a2[cnt2].coef;
                temp->expo = a1[cnt1].expo+a2[cnt2].expo;
                temp->next = NULL;
                resEnd = temp;
                insert(temp,result);
                temp = NULL;
                
            }
        }
    }

    return 0;
}