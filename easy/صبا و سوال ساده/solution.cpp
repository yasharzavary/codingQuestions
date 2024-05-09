
#include <iostream>
using namespace std;


int main(){
    int k;
    float n;
    cin>>n>>k;
    for(int i=0;i<k;i++)n/=2;
    int temp = n;
    if(temp == n || n > 0)cout<<temp;
    else cout<<temp-1;



    return 0;
}