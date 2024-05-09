
#include <iostream>
using namespace std;


int main(){

    int a, b, l;
    cin>>a>>b>>l;
    if(l%2==0)cout<<(a+b)*(l/2);
    else cout<<(a+b)*(l/2)+a;

    return 0;
}
