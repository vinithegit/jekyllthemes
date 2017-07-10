// 6. Balloons Colors
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int t,n,x,y,a,i;
	bool bflag, eflag;
	cin>>t;
	for (i=0; i<t;i++){
		cin>>n>>x>>y;
		cin>>a;
		if (a==x) bflag = true;
		for(int j=1;j<n;j++){
			cin>>a;
		}
		if (a==y)  eflag= true;
		if(bflag & eflag) cout<<"BOTH"<<endl;
		else if (bflag) cout<<"EASY"<<endl;
		else if (eflag) cout<<"HARD"<<endl;
		else cout<<"OKAY"<<endl;
		bflag=false;
		eflag=false;
	}

	return 0;
}
