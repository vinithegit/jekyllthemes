// 193. Omar Loves Candies, Again
#include <bits/stdc++.h>
using namespace std;
int main(){
	int T;
	cin>>T;
	string s;
	char x;
	map <char, int> m;
	for(int i=0; i<T; i++){
		cin>>s;
		int l= s.length();
		x=s[0];
		for(int k=0; k<l; k++){
			if(m.find(s[k])== m.end())
				m[s[k]] = 1;
			else 
				m[s[k]] = m[s[k]] +1;
			if(m[s[k]] >m[x] ) 
				x = s[k];
			else if(m[s[k]] ==m[x] and int(s[k])<int(x))
				x = s[k];
			else continue;

		}
		cout<<m[x]<<" "<<x<<endl;
		m.clear();
	}
	return 0;
}