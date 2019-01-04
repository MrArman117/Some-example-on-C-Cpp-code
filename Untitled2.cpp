#include<iostream>
using namespace std;
int main()
{
    int a,b,c,d;
    cin>>d;
    for(c=0;c<d;c++)
    {
        cin>>a>>b;
        if(a>b)
        cout<<">"<<endl;
        if(a<b)
        cout<<"<"<<endl;
        if(a==b)
        cout<<"="<<endl;
    }
    return 0;
}
