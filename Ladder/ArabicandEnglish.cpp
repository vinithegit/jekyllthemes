// 24. Arabic and English
#include <bits/stdc++.h>
using namespace std;
int main(){
	int T,N,i,k;
	cin>>T;
	string s, s1 = "",s2 = "", eng = "";
	// vector <string> v;
	for (i=0; i<T; i++){
		cin>>N;
		bool flag =true;
		for(k=0; k<N; k++){
			cin>>s;
			if (not (isalpha(s[0])) and flag == true)
				s1 = s1 + s+ " ";
			if (isalpha(s[0]) and flag ==true){
				eng = s+" ";
				flag =false;
			}
			if (not (isalpha(s[0])) and flag == false)
				s2= s2 + s+" ";
		}
		cout<< s2+eng+s1<<endl;
		s1="";
		s2="";
		eng="";
	}
	return 0;
}