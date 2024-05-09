#include <iostream>
using namespace std;

struct linked_list{
    int data;
    linked_list *point;

};

int main(){
    int n;
    linked_list *head;
    string final="++";
    cin>>n;
    if(n==1)cout<<'+';
    else if(n==2)cout<<"++";
    else if(n==3)cout<<"+++";
    else{
        linked_list *last = new linked_list;
        head = last;
        head->point = last;
        last->point = nullptr;
        int temp,x=2,y=3;
        while(true){
            temp = x+y;
            x=y;
            y=temp;
            if(y>n)break;
            last->data = y;
            linked_list *linked_list_temp = new linked_list;
            last->point = linked_list_temp;
            last = linked_list_temp;
            last->point = nullptr;
        }
        cout<<"+++";
        for(int i = 4; i<=n; i++){
            if(i == head->data){
                head = head->point;
                cout<<'+';
            }
            else cout<<'-';
        }

    }


    return 0;
}