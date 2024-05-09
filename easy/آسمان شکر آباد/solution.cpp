
#include <iostream>
using namespace std;


int main(){

    int n,m;
    int star_number=0;
    char input;
    cin>>n>>m;
    for(int i=0;i<n;i++){
        for(int j=0; j<m;j++){
            cin>>input;
            if(input == '*')star_number++;
        }
    }
    cout<<star_number;

    return 0;
}
