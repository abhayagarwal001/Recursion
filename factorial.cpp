#include<iostream>
using namespace std;

int factorial(int n)
{
    //base condition
    if(n==0)
    return 1;
    
    //recurence relation
    int fact=n*factorial(n-1);
    return fact;
}

int main()
{

    int n;
    cin>>n;

    int ans=factorial(n);
    cout<<"Factorial of "<<n <<" is "<<ans;
    return 0;
}

