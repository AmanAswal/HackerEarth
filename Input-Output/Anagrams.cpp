#include<iostream>
#include<string>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
    int count=0,x,y;
    string s1, s2;
    cin>>s1;
    cin>>s2;
    
    x = s1.length();
    y = s2.length();

    for(int i=0; i<x; i++){
        for(int j=0; j<y; j++){
            if(s1[i] == s2[j]){
                count++;
                s2[j]='0';
                break;
            }
        }
    }
    cout<<(x+y) - (count*2)<<endl;
    }
    
    return 0;
}
1
