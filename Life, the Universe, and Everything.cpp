#include<cstdio>
using namespace std;
int main()
{
    int n;
    bool res=true;
    while(scanf("%d",&n)!=EOF)
    {
        if(n==42)
            res=false;
        if(res)
            printf("%d\n",n);
    }
    return 0;
}
