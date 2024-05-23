

#include <iostream>
using namespace std;


int find_min_op(int n){
	if(n==0)return 0;
	if(n==1)return 1;
	int i;
	for(i=2;i<=n;i*=2);
	return 1 + find_min_op(n - i/2);
}


int main(){
	int n;
	cin>>n;
	char road[n];
	for(int i=0;i<n;i++)cin>>road[i];
	int s,t, k=0, min_operation=0;
	cin>>s>>t;
	s-=1;
	t-=1;
	if(s>=t){
		for(t;t<=s;t++){
			if(road[t] == 'H')k+=1;
			else{
			       	min_operation += find_min_op(k);
				k=0;
			}
		
			
		}
	

	}
	else{	
		for(t;t>=s;t--){
			if(road[t] == 'H')k+=1;
			else{
			       	min_operation += find_min_op(k);
				k=0;
			}
		
			
		}
	

	}	
	cout<<min_operation;


	return 0;
}






