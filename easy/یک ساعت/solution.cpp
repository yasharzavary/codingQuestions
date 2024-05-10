

#include <iostream>
using namespace std;



int main(){
    int h, m;
    cin>>h>>m;

    if(h == 6 || h == 0);
    else if(h>6)h = 3 + (9 - h);
    else h = 9 + (3 - h);

    if(m == 0 || m == 30);
    else if(m>30) m = 15 + (45 - m);
    else m = 45 + (15 - m);

    if(h >= 10)cout<<h<<':';
    else cout<<'0'<<h<<':';

    if(m >= 10) cout<<m;
    else cout<<'0'<<m;

    return 0;
}

