#include<stdio.h>
// fibonacci series
int main()
{
    int i,n;
    int t1=0,t2=1;
    int nexttearm = t1 + t2;

    printf("Enter the number of tearm:");
    scanf("%d",&n);

    printf("Fibonacci serise:%d,%d,", t1,t2);

    for(i=3; i<=n; ++i)
    {
        printf("%d,", nexttearm);
        t1 = t2;
        t2 = nexttearm;
        nexttearm= t1 + t2;

    }
    return 0;

}
	