#include <iostream>
using namespace std;

struct link{
    int data;
    link *next;
};


int main(){
    int n;
    cin>>n;
    if(n==1)cout<<'1';
    else if(n==2)cout<<'1'<<"\n1 1\n";
    else{
        cout<<"1\n";
        link *first = new link;
        link *second = new link;

        link *first_last=first, *second_last;

        link *fill = new link;

        first_last->data = 1;
        fill->data = 1;
        first_last->next = fill;
        fill->next = nullptr;
        first_last = fill;

        int index = 1;
        while(true){
            if(index == n)break;
            cout<<"1 ";
            delete second;
            second = new link;
            delete second_last;
            second_last = second;
            second_last->data = 1;
            link *helper = first;
            while(helper->next != nullptr){
                fill = new link;
                cout<<helper->data + helper->next->data<<' ';
                fill->data = helper->data + helper->next->data;
//                cout<<fill->data;
                second_last->next = fill;
                second_last = fill;
//                cout<<second_last->data;
                helper = helper->next;
            }
            second_last->next = nullptr;
            cout<<'1'<<endl;
            index++;
            if(index == n)break;
            cout<<"1 ";
            delete first;
            first = new link;
            delete first_last;
            first_last = first;
            first_last->data = 1;
            helper = second;
//            cout<<helper->next->data;
            while(helper->next != nullptr){
                fill = new link;
                cout<<helper->data + helper->next->data<<' ';
                fill->data = helper->data + helper->next->data;
                first_last->next = fill;
                first_last = fill;
                helper = helper->next;
            }
            first_last->next = nullptr;
            cout<<'1'<<endl;
            index++;
        }

    }

    return 0;
}
