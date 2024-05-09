//
// Created by Windows on 07/05/2024.
//
#include <iostream>
using namespace std;

int find_solutions(int open[], int close[], int c, int final[], int arr[], int time=0){
    if(time==3 || c==0) return 0;




}


int main(){
    int n, c, temp;
    int open_num, open[n];
    int close_num, close[n];
    int array[n];
    int i;

    cin>>n;
    cin>>c;

    for(i=0;i<n;i++)array[i]=1;

    for(i=0;;i++){
        cin>>temp;
        if(temp == -1) break;
        open[i] = temp;
    }
    open_num = i;
    for(i=0;;i++){
        cin>>temp;
        if(temp == -1) break;
        close[i] = temp;
    }
    close_num = i;

    return 0;
}