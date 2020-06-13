#include<iostream>
#include<string>

using namespace std;

int main()
{
    string s;
    cin>>s;
    int first=0, second=0;
    for(int i=0; i<s.length(); i++){
        if(s[i] == 'L'){
            first--;
        }
        else if(s[i] == 'R'){
            first++;
        }
        else if(s[i] == 'U'){
            second++;
        }
        else if(s[i] == 'D'){
            second--;
        }
    }

    cout<<first<<" "<<second;
    return 0;
}
