
#include <iostream>
using namespace std;

int main(){
    int now_score, travel_day;
    cin>>now_score;
    cin>>travel_day;
    if(travel_day == 0)cout<<20;
    else if(travel_day == 7)cout<<now_score;
    else{
        now_score -= travel_day;
        if(now_score < 0)cout<<0;
        else cout<<now_score;
    }

    return 0;
}

