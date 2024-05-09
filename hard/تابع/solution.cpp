#include <iostream>
using namespace std;


int max(int n, int arr[]){
    int max_number = arr[0];
    for(int i =1;i<n;i++){
        if(arr[i] > max_number) max_number = arr[i];
    }
    return max_number;
}

int min(int n, int arr[]){
    int min_number = arr[0];
    for(int i =1;i<n;i++){
        if(arr[i] < min_number) min_number = arr[i];
    }
    return min_number;
}

int f(int i, int j, int a [], int n){
    if(i==j) return a[i-1];
    int number_array[3] = {f(i+1, j,a, n), f(i, j-1, a, n), min(n, a) * (j - i + 1)};
    return max(3, number_array);
}

int main(){
    int n,Q;
    int n1,n2;
    cin>>n>>Q;
    int a_array[n],f_array[Q];
    for(int i=0;i<n;i++)cin>>a_array[i];
    for(int i=0;i<Q;i++){
        cin>>n1>>n2;
//        f_array[i] = f(n1, n2, a_array, n);
    }
    cout<<max(Q, f_array);
    int x = f(3,5,a_array,n);
    cout<<x;
    return 0;
}





