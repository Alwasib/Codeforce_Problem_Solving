
#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a[n];
    int i,*f,*l;
    for(i=0;i<n;i++)
        scanf("%d",&a[i]);
     f=&a[0];
    int sr=0,dm=0;
    l=&a[n-1];
    int z=1;
    while(l>=f)
    {
        if(z%2==1)
        {
            if(*l>*f)
            {
                sr=sr+*l;
                l--;
            }
            else{
                sr=sr+*f;
                f++;
            }
        }
        else{

            if(*l>*f)
            {
                dm=dm+*l;
                l--;
            }
            else{
                dm=dm+*f;
                f++;
            }

            }
        z++;
    }
    printf("%d %d",sr,dm);
     return 0;
}
