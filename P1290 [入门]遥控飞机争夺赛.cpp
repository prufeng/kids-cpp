#include<bits/stdc++.h>
struct stu{
    int num;
    int score[5];
    double avg;
}a[100];
int main()
{void f(int *p,int n);
    void sort(struct stu *p,int n);
    int i,j,k,n;
    double sum;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        sum=0;
        scanf("%d",&a[i].num);
        for(j=0;j<5;j++)
            scanf("%d",&a[i].score[j]);
        f(a[i].score,5);       
        for(j=0;j<5;j++)
            sum=sum+a[i].score[j];
        a[i].avg=sum/3;
    }
    sort(a,n);   
    for(i=0;i<3;i++)
        printf("%d %.3f\n",a[i].num,a[i].avg);
    return 0;
}
void f(int *p,int n)
{
    int i,max,min;
    max=min=0;
    for(i=0;i<n;i++)
    {
        if(*(p+max)<*(p+i))
            max=i;
        if(*(p+min)>*(p+i))
            min=i;
    }
    *(p+max)=*(p+min)=0;
}
void sort(struct stu *p,int n)
{
    int i,j,k;
    struct stu m;
    for(i=0;i<n;i++)      
    {
        k=i;
        for(j=i+1;j<n;j++)
            if((p+k)->avg<(p+j)->avg)
                k=j;
        m=*(p+k);*(p+k)=*(p+i);*(p+i)=m;
    }
}
