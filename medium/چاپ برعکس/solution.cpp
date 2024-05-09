
#include <iostream>
using namespace std;

int main(){
    int a;
    cin>>a;
    if(a==0)return 0;
    main();
    cout<<a<<"\n";

    return 0;
}