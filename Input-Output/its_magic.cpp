#include<iostream>
using namespace std;

int main()
{
    long long int n,totalSum=0, min=100000000, index=-1;
    cin>>n;
    long long int arr[n];
    for(long long int i=0; i<n; i++){
        cin>>arr[i];
        totalSum += arr[i];
    }
    for(long long int i=0; i<n; i++){
        if((totalSum-arr[i])%7==0 && min>arr[i]){
            min=arr[i];
            index=i;
        }
    }
    cout<<index;
    return 0;
}
