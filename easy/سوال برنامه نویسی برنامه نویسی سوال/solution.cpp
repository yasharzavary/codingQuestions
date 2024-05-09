
#include <iostream>
using namespace std;


int main(){
    int n;
    cin>>n;
    string word_array[n];


    for(int i=0;i<n;i++)cin>>word_array[i];
    for(int i=n-1; i>=0; i--)cout<<word_array[i]<<' ';

    return 0;
}

