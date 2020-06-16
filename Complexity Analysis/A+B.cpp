#include<iostream>
#include <boost/multiprecision/cpp_int.hpp>

using namespace boost::multiprecision;
using namespace std;

int main()
{
int512_t a,b;
while(cin>>a>>b)
cout<<a+b<<"\n";
return 0;
}
