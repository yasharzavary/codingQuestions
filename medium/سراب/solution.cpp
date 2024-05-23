

#include <iostream>
using namespace std;


int main(){
    int t, x, y;
    int x_temp, y_temp;
    bool turn = true;
    cin>>t;

    for(int i=0; i<t; i++){
        cin>>x>>y;
        x_temp = 0;
        y_temp = 0;
        for(int j=0;; j++){
            if(x_temp > x && y_temp > y){
                cout<<-1<<endl;
                break;
            }
            if(x_temp == x && y_temp == y){
                cout<<j<<endl;
                break;
            }
            if(j % 2 == 0){
                x_temp += 1;
                y_temp += 1;
            }
            else if(turn){
                x_temp += 1;
                y_temp -= 1;
                turn = false;
            }
            else{
                turn = true;
                x_temp -= 1;
                y_temp += 1;
            }

        }

    }



    return 0;
}