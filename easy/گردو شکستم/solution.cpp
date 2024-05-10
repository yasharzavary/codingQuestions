
#include <iostream>
using namespace std;

int main(){
    int n, x, y, i;
    int *final_x = new int;
    int *final_y = new int;
    int sum = 0;
    *final_x = 0;
    *final_y = 0;
    cin>>n>>x>>y;

    bool not_found = true;
    while(true){  // go with x, check with y
        i = 1;
        while(true){
            if(sum + (i * y) == n){
                not_found = false;
                break;
            }
            if(sum  + (i * y) > n)break;
            i++;
        }
        if(! not_found){
            *final_y += i;
            break;
        }
        sum += x;
        *final_x += 1;
        if(sum == n){
            not_found = false;
            break;
        }
        else if (sum > n)break;
    }

    if(! not_found){
        cout<<*final_x<<' '<<*final_y;
    }
    else cout<<-1;

    return 0;
}
