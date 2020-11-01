#include<iostream>
using namespace std;


bool checkdigit(int n)
{
    while(n)
    {
        int dig=n%10;
        if(dig!=2 && dig!=3 && dig!=5 && dig!=7)
            return false;
        n/=10;
    }
    return true;
}

bool prime(int n)
{
    if(n==1)
        return false;
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0)
            return false;
    }
    return true;
}

int megaprime(int n)
{
    return(checkdigit(n) && prime(n));
}

int main()
{
    int n1,n2;
    cin>>n1>>n2;
    for(int i=n1;i<=n2;i++)
    {
        if(megaprime(i))
            cout<<i<<' ';

}
}
