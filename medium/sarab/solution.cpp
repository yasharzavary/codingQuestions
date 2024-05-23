
#include <iostream>
using namespace std;

int main(){
	int q;
	cin>>q;
	int x,y;
	for(int i=0;i<q;i++){
		cin>>x>>y;
		if(x==y){
			for(int j=0;;j+=2){
				//cout<<j;
				if(x == j){
					cout<<j*2<<endl;
					break;
				}
				else if(x==j+1){
					cout<<j*2+1<<endl;
					break;
				}
			}
		}
		else if(y == x-2){
			for(int j=1;;j+=2){
				if(x == j+1){
					cout<<j*2<<endl;
					break;
				}
				else if(x==j+2){
					cout<<j*2+1<<endl;
					break;
				}
			
			}
		}
		else cout<<-1<<endl;
	}




	return 0;
}






