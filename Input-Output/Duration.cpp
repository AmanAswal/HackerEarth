#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int sh,sm,eh,em;
        cin>>sh>>sm>>eh>>em;

        if(em<sm){
            cout<<eh - sh - 1 <<" "<< 60 + em - sm;
        }
        else{
            cout<<eh - sh <<" "<<em - sm;
        }
            cout<<"\n";
    }
    return 0;
}
