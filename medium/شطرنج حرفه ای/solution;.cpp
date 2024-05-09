
#include <iostream>
using namespace std;

int main(){
    int gived_array[6], real_array[6]={1,1,2,2,2,8};
    for(int i=0;i<6;i++)cin>>gived_array[i];
    for(int i=0;i<6;i++)cout<<(real_array[i] - gived_array[i])<<' ';

    return 0;
}