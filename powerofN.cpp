#include<iostream>
using namespace std;

int power(int n)
{
    //base case
    if(n==0)
    return 1;

    //recurence relation
    int ans=2*power(n-1);
    return ans;
}


int main()
{
 
 int n;
    cin>>n;

    int ans=power(n);
    cout<<"2 to power "<<n <<" is "<<ans;
    return 0;


}