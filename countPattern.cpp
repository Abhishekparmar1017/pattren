/*
123456789
*/
#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int count = 1;
	for(int row=1;row<=n;row=row+1){
		for(int column=1;column<=n;column=column+1){
			cout<<count;
			count= count+1;
		}
	}
	return 0;
}
