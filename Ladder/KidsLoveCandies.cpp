// 17.Kids Love Candies
#include <bits/stdc++.h>
using namespace std;
int main(){
	int T, n, k,x,i,j,count;
	cin>>T;
	for(i=0;i<T;i++){
		count=0;
		cin>>n>>k;
		for(j=0; j<n; j++){
			cin>>x;
			count+=x/k;
		}
		cout<<count<<endl;;
	}
}