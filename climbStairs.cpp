#include<iostream>
using namespace std;

int countstep(int n)
{
    //base case
    if(n<0)
    return 0 ;
    if(n==0)
    return 1;


    //recurence relation
    int ans=countstep(n-1)+countstep(n-2);
    return ans;
    
}


int main()
{
 
    int n;
    cin>>n;

    int ans=countstep(n);
    cout<<"Total count is "<<ans;

    return 0;


}