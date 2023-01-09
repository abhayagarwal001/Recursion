#include<iostream>
using namespace std;

void sayDigit(int n,string arr[])
{
    //base case
    if(n==0)
    return  ;

    //processing
    int last_digit=n%10;
    n=n/10;

    //recurence relation
    sayDigit(n,arr);

    //processing
    cout<<arr[last_digit]<<" ";
    
}


int main()
{
 
    string arr[10]={"zero","one","two","three","four","five","six","seven","eight","nine"};
    int n;
    cin>>n;

   sayDigit(n,arr);

    return 0;


}