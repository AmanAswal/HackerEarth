#include<iostream>
#include<string>
using namespace std;

bool areAnagram(string s1, string s2){
    int a[256]={0};
    if(s1.length() != s2.length()){
        return false;
    }
    for(int i=0; i<s1.length(); i++){
        int index = s1[i];
        a[index]++;
    }

    for(int i=0; i<s2.length(); i++){
        int index = s2[i];
        a[index]--;
    }

    for(int i=0; i<256; i++){
        if(a[i] != 0){
            return false;
        }
    }

    return true;
}


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        string s1,s2;
        cin>>s1>>s2;

        if(areAnagram(s1,s2)){
            cout<<"YES\n";
        }
        else{
            cout<<"NO\n";
        }
    }
    return 0;
}
