#include<iostream>
using namespace std;

int main()
{
    string s;
    int sum=0;
    cin>>s;

    if(s.length() == 10){
       for(int i=0; i<=10; i++){
            sum = (i+1)*s[i];
        }
        if(sum%11==0)
            cout<<"Legal ISBN";
        else
            cout<<"Illegal ISBN";
    }
    else
        cout<<"Illegal ISBN";

    return 0;
}
