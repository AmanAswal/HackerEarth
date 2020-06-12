#include<iostream>
using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int green, purple, n, first=0, second=0;
        cin>>green>>purple;
        cin>>n;
        for(int i=0; i<n; i++){
            int price1, price2;
            cin>>price1>>price2;
            if(price1==1){
                first++;
            }
            if(price2==1){
                second++;
            }
        }
        cout<<min((first*green + second*purple),(second*green + first*purple))<<endl;
    }
    return 0;
}
