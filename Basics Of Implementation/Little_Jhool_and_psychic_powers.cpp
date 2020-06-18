#include<bits/stdc++.h>
using namespace std;
int main()
{ 
    int zz,oo;
    string S;
    string z="000000";
    string o="111111";
    cin>>S;
    zz=S.find(z);
    oo=S.find(o);
    if(zz>=0||oo>=0)
    {
        cout<<"Sorry, sorry!";
    }
    else
    {
        cout<<"Good luck!";
    }
    return 0;
}
