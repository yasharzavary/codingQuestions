

#include <iostream>
using namespace std;

int main(){
    int n,k;
    int input_number;
    cin>>n>>k;
    for(int i =0; i<n; i++){
        cin>>input_number;
        k -= input_number;
    }
    if(k<=0)cout<<"YES";
    else cout<<"NO";


    return 0;
}