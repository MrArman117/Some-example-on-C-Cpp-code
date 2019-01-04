#include<iostream>
#include<math.h>
using namespace std;
int main()
{
    int a,b,i,j,k;
    while(cin >> a >> b && a!=0 && b!=0)
    {
        k=0;
        for(i=a;i<=b;i++)
        {
            j=sqrt(i);
            if(i==pow(j,2))
                k++;
        }
        cout<<k<<endl;
    }
    return 0;
}

