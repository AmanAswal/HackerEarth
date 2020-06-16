#include<iostream>
using namespace std;

int main()
{
    string S;
    cin>>S;
    char c ='a';
    int sum=0;

    for(int i=0; i<S.length(); i++){
        int x = (int(S[i]) - int(c)) + 1;
        sum +=x;
    }
    cout<<sum;
    return 0;
}
