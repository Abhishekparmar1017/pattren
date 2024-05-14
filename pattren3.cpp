/*
*
**
***
****
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	for(int row=1;row<=n;row=row+1){
		for(int column=1;column<=row;column=column+1){
			cout<<"*";
		}
		cout<<endl;
	}
	return 0;
}
