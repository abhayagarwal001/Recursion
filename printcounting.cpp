#include<iostream>
using namespace std;

void printcount(int n)
{
    //base case
    if(n==0)
    return ;

    //processing part
    cout<<n<<" ";

    //recurence relation
    printcount(n-1);
    
}


int main()
{
 
    int n;
    cin>>n;

    printcount(n);

    return 0;


}