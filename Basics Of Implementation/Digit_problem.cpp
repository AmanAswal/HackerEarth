#include<iostream>
using namespace std;

int main()
{
    char x[19];
    int k;
    cin>>x>>k;
    int i=0;
    while( x[i]!='\0' && k!=0){
        if(x[i]!='9'){
            x[i]='9';
            k--;
        }
        i++;
    }
    cout<<x;

    return 0;
}
