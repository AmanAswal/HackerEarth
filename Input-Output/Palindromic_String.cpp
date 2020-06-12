#include<iostream>
#include<string>

using namespace std;

int main()
{
    string S, S1;
    getline(cin, S);
    S1 = S;

    int left=0, right = S.length()- 1;
    while(left < right){
        char temp = S[left];
        S[left++] = S[right];
        S[right--] = temp;
    }
    
    if(S1==S){
        cout<<"YES";
    }
    else{
        cout<<"NO";
    }

    return 0;
}
