

#include <iostream>
using namespace std;


int main(){
    float n, k, sum=0;
    float temp;
    cin>>n>>k;

    for(int i=0; i<n;i++){
        cin>>temp;
        sum += temp;
    }

    int temp2;
    temp2 = sum/k;
    if(sum/k > temp2)cout<<n - (temp2 + 1);
    else cout<<n - temp2;


    return 0;
}