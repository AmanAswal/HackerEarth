#include<iostream>
using namespace std;

int main()
{
    int l,n,w,h;
    cin>>l;
    cin>>n;
    while(n--)
    {
        cin>>w>>h;

        if(w<l || h<l){
            cout<<"UPLOAD ANOTHER"<<endl;
        }
        else if(w>=l && h>=l){
            if(w==h){
                cout<<"ACCEPTED"<<endl;
            }
            else{
                cout<<"CROP IT"<<endl;
            }
        }
    }
    return 0;
}
