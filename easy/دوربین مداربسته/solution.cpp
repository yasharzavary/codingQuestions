#include <iostream>
using namespace std;

int main(){
    long x_array[3];
    long y_array[3];

    for(int i=0; i<3;i++)cin>>x_array[i]>>y_array[i];

    if(x_array[0] == x_array[1])cout<<x_array[2];
    else if(x_array[1] == x_array[2])cout<<x_array[0];
    else cout<<x_array[1];

    cout<<' ';

    if(y_array[0] == y_array[1])cout<<y_array[2];
    else if(y_array[1] == y_array[2])cout<<y_array[0];
    else cout<<y_array[1];

    return 0;
}