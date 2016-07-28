#include <bits/stdc++.h>
using namespace std;
template <class T> inline T bigmod(T b, T p, T m)
{
    T ret;
    if(p==0) return 1;
    if(p&1)
    {
        ret=(bigmod(b,p/2,m)%m);
        return ((b%m)*ret*ret)%m;
    }
    else
    {
        ret=(bigmod(b,p/2,m)%m);
        return (ret*ret)%m;
    }
}
typedef long long LL;
int main()
{
    LL a,b,t,k=1000;
    scanf("%lld",&t);
    while(t--)
    {
        scanf("%lld %lld",&a,&b);
        printf("%lld\n",bigmod(a,b,k)%10);
    }
    return 0;
}
