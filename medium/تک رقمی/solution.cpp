#include <iostream>
using namespace std;

int len(string num){
    int i=0;
    for(i; num[i];)i++;

    return i;
}


int main(){
    string number;
    cin>>number;
    int sum;

    int i;
    while(len(number)!=1){
        sum = 0;
        for(i=0;number[i];i++)sum+=number[i] - 48;
        number= to_string(sum);
    }
    cout<<number;


    return 0;
}
