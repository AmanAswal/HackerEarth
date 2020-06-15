#include<iostream>

using namespace std;

int main()
{
    int t,a=0,b=7;
    cin>>t;
    while(t--)
    {   
        int n;
        cin>>n;
        if(n <= (a+b)/2){
            cout<<"A\n";
            a=n;
        }
        else{
            cout<<"B\n";
            b=n;
        }
    }
    return 0;
}
