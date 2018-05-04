#include <iostream>

using namespace std;

int f1[10],f2[10];
int main()
{int ora,minh=0,maxh=0,dif;bool ck=false,ck2=false;
    cin>>ora;
    for(int i=0;i<4;i++)
    {
        f1[ora%10]++;
        f2[ora%10]++;
        ora=ora/10;
    }
    for(int i=2;i>-1;i--)
    {
        if(i==2 && f1[2]>0)
            ck=true;
        if(f1[i]>0)
            minh=minh*10+i;
        f1[i]--;
    }
    for(int i=9;i>-1;i--)
    {
        if(ck==true && i>3)
            i=3;
        if(f1[i]>0)
            minh=minh*10+i;
        f1[i]--;
    }
    for(int i=5;i>-1;i--)
    {
        if(f1[i]>0)
            minh=minh*10+i;
        f1[i]--;
    }
    for(int i=9;i>-1;i--)
    {
        if(f1[i]>0)
            minh=minh*10+i;
        f1[i]--;
    }
    for(int i=0;i<4;i++)
    {
        for(int j=0;j<9;j++)
        {
            if(f2[j]>0)
            {
                f2[j]--;
                maxh=maxh*10+j;
                if(j==0)
                    ck2=true;
                break;
            }
        }
    }
    cout<<minh<<"\n";
    if(ck2==true)
        cout<<"0";
    cout<<maxh<<"\n";
    dif=minh-maxh;
    int x=(dif/10%10)*10+(dif%10);
    if(x>60)
        dif-=40;
    cout<<dif;
    return 0;
}
