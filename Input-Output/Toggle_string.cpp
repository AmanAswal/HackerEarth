#include<iostream>
#include<string>
using namespace std;

int main()
{
    string S;
    cin>>S;
    
    for(int i=0; i<S.length(); i++){
        if(S[i]>=97 && S[i]<=122){
            S[i] = toupper(S[i]);
        }
        else if(S[i]>=65 && S[i]<=92){
            S[i] = tolower(S[i]);
        }
    }
    cout<<S;

    return 0;
}
