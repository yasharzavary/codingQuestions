#include <iostream>
#include <iomanip>
using namespace std;

double sum(int numbers[]){
    double final =0;
    for(int i = 0; i<4;i++)final+=numbers[i];
    return final;
}

double max(int numbers[]){
    double max_number = numbers[0];
    for(int i = 1; i<4; i++)if(max_number < numbers[i])max_number = numbers[i];
    return max_number;
}

double min(int numbers[]){
    double min_number = numbers[0];
    for(int i = 1; i<4; i++)if(min_number > numbers[i])min_number = numbers[i];
    return min_number;
}

double avg(int numbers[]){
    return sum(numbers)/4;
}

double pred(int numbers[]){
    double final = 1;
    for(int i=0; i<4; i++)final*=numbers[i];
    return final;
}

int main(){
    int num_array[4];
    for(int i=0;i<4;i++)cin>>num_array[i];
    cout<<"Sum : "<<fixed<<setprecision(6)<<sum(num_array)<<endl;
    cout<<"Average : "<<fixed<<setprecision(6)<<avg(num_array)<<endl;
    cout<<"Product : "<<fixed<<setprecision(6)<<pred(num_array)<<endl;
    cout<<"MAX : "<<fixed<<setprecision(6)<<max(num_array)<<endl;
    cout<<"MIN : "<<fixed<<setprecision(6)<<min(num_array);

    return 0;
}