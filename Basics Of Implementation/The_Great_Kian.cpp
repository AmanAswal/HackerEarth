#include<iostream>
using namespace std;

int main()
{
    int n; 
    cin>>n;
    long int input, sum1=0, sum2=0, sum3=0;
    for(int i=1; i<=n; i++){
        cin>>input; The Great Kian 

        switch(i%3){
            case 1:
            sum1 += input;
            break;

            case 2:
            sum2 += input;
            break;

            case 0:
            sum3 += input;
            break;
        }
    }
    cout<<sum1<<" "<<sum2<<" "<<sum3;

    return 0;
}
