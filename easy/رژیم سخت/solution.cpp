

#include <iostream>
using namespace std;

int main(){
    int red=0, yellow=0, green=0;
    char temp;
    for(int i = 0; i<5; i++){
        cin>>temp;
        if(temp == 'G')green++;
        else if(temp == 'Y')yellow++;
        else red++;
    }
    if((green == 0) || (red >= 3) || (red>=2 && yellow>=2))cout<<"nakhor lite";
    else cout<<"rahat baash";

    return 0;
}
