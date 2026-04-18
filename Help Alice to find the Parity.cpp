#include <bits/stdc++.h>
using namespace std;

int main() {
	int L,R;
	cin>>L>>R;
	int result=0;
	for(int i=L;i<=R;i++){
		result^=i;
	}
	
	if(result%2==0){
		cout<<"even\n";
	}else{
		cout<<"odd\n";
		}
	return 0;
}