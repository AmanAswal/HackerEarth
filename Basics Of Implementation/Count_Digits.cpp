#include<iostream>
using namespace std;

int main()
{
    string S;
    int zero=0,one=0,two=0,three=0,four=0,five=0,six=0,seven=0,eight=0,nine=0;
    cin>>S;
    for(int i=0; i<S.length(); i++){
        if(S[i]== '0'){
            zero++;
        }
        else if(S[i]=='1'){
            one++;
        }
        else if(S[i]=='2'){
            two++;
        }
        else if(S[i]=='3'){
            three++;
        }
        else if(S[i]=='4'){
            four++;
        }
        else if(S[i]=='5'){
            five++;
        }
        else if(S[i]=='6'){
            six++;
        }
        else if(S[i]=='7'){
Count Digits 
            seven++;
        }
        else if(S[i]=='8'){
            eight++;
        }
        else if(S[i]=='9'){
            nine++;
        }
    }

    cout<<"0 "<<zero<<endl;
    cout<<"1 "<<one<<endl;
    cout<<"2 "<<two<<endl;
    cout<<"3 "<<three<<endl;
    cout<<"4 "<<four<<endl;
    cout<<"5 "<<five<<endl;
    cout<<"6 "<<six<<endl;
    cout<<"7 "<<seven<<endl;
    cout<<"8 "<<eight<<endl;
    cout<<"9 "<<nine<<endl;

    return 0;
}
