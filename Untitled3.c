#include <stdio.h>

int main()
{
        int a,b,n;
        scanf("%d",&n);
        int i=1;
        while(i<n)
        {
            scanf("%a %b",&a,&b);
            if(a<b)
            {
                printf("<");
            }
            else if(a>b)
            {
                printf(">");
            }
            else(a=b)
            {
                printf("=");
            }
            i++;
        }

        return 0;
};
