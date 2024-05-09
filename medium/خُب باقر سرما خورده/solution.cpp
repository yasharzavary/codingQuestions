#include <iostream>
using namespace std;


int main(){
    string text1="HAFEZ", text2="MOLANA";
    string input;
    bool have, not_found=true;
    for(int i=0; i<5; i++){
        cin>>input;
        have = true;
        for(int k=0; input[k]; k++){
            int j=0;
            for(j=0; j<5 && input[k]; j++,k++) {
                if (input[k] != text1[j]) {
                    have = false;
                    break;
                }
            }
            if(j==5){
                have=true;
                break;
            }
        }
        if(have){
            cout<<i+1<<' ';
            not_found=false;
            continue;
        }
        have = true;
        for(int k=0; input[k]; k++){
            int j=0;
            for(j=0; j<5 && input[k]; j++,k++) {
                if (input[k] != text2[j]) {
                    have = false;
                    break;
                }
            }
            if(j==5){
                have=true;
                break;
            }
        }
        if(have){
            cout<<i+1<<' ';
            not_found=false;
        }
    }
    if(not_found)cout<<"NOT FOUND!";


    return 0;
}