    #include <iostream>
    using namespace std;
    int main()
    {
        int t,n,r;
        cin>>t;
        while(t--)
        {
            cin>>n;
            r = n%12;
            switch(r){
                case 0:
                    cout<<(n-11)<<" "<<"WS";
                    break;
                case 1:
                    cout<<(n+11)<<" "<<"WS";
                    break;
                case 2:
                    cout<<(n+9)<<" "<<"MS";
                    break;
                case 3:
                    cout<<(n+7)<<" "<<"AS";
                    break;
                case 4:
                    cout<<(n+5)<<" "<<"AS";
                    break;
                case 5:
                    cout<<(n+3)<<" "<<"MS";
                    break;
                case 6:
                    cout<<(n+1)<<" "<<"WS";
                    break;
                case 7:
                    cout<<(n-1)<<" "<<"WS";
                    break;
                case 8:
                    cout<<(n-3)<<" "<<"MS";
                    break;
                case 9:
                    cout<<(n-5)<<" "<<"AS";
                    break;
                case 10:
                    cout<<(n-7)<<" "<<"AS";
                    break;
                case 11:
                    cout<<(n-9)<<" "<<"MS";
                    break;
                case 12:
                    cout<<(n-11)<<" "<<"WS";
                    break;
            }
            cout<<endl;
            }
        return 0;
    }
