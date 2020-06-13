    #include<iostream>
    #include<string>
     
    using namespace std;
     
    int main()
    {
        int n, flag=1;
        cin>>n;
        string a;
        cin>>a;
        for(int i=0; i<a.length(); i++){
            if(a[i] == 'H' && a[i+1] == 'H'){
                flag=0;
                break;
            }
            else if(a[i]=='.'){
                a[i] = 'B';
            }
        }
        
        if(flag){
            cout<<"YES\n";
            cout<<a;
        }
        else{
            cout<<"NO\n";
        }
     
        return 0;
    }
