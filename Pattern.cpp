//Pattern making 
//equal row or  column
/* 
****
****
****
****
*/

#include<bits/stdc++.h>
using namespace std;
int main(){
	int n;
	cin>>n;
	int row = 1;
	while(row<=n){
	int column = 1;
	while(column<=n){
		cout<<"*";
		column=column+1;
	}
	cout<<endl;
	row=row+1;
	}
	return 0;
}
   
