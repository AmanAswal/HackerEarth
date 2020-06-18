#include<iostream>
using namespace std;

int main()
{
    long int d,oc,of,od,cs,cb,cm,cd;
    long onlineCost, classicCost;

    cin>>d;
    cin>>oc>>of>>od;
    cin>>cs>>cb>>cm>>cd;

    onlineCost = oc + (d-of)*od;
    classicCost = cb + ((d/cs)*cm + d*cd);

    cout<<((onlineCost<=classicCost)? "Online Taxi": "Classic Taxi");

    return 0;
}
