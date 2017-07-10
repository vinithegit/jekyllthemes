// 159. Nth Smallest Value
#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int T,i,j,x,min1=INT_MAX, min2=INT_MAX;
	cin>>T;
	for(i=0; i<T; i++){
		for(j=0; j<10;j++){
			cin >>x;
			if(x<min1){
				min2=min1;
				min1=x;
			}
			else if(x<min2) 
				min2 =x;
		}
		cout<<min2<<endl;
		min1=INT_MAX, min2=INT_MAX;
	}
	return 0;
}