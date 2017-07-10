// 22. Contest Hall Preparation
#include <bits/stdc++.h>
using namespace std;
int main()
{

	int T, i, k, l, N, x, M, count=0;
	cin>>T;
	for(i=0; i<T; i++)
	{
		cin>>N,M;
		cout<<"M is "<<M<<" N is "<<N<<endl;
		vector < vector < int> > v(N, vector<int>(M)); 
		vector<int> row;
		for(i=0;i<N;i++)
		{
			for(k=0;i<M;k++)
				{
					cin>>x;
					row.push_back(x);
				}
				v.push_back(row);	
				row.clear();
		}
		for(int b=0;b<M;b++){
			cout<<v[b][0]<<v[b][1]<<v[b][2]<<endl;

		}
		
	}
	return 0;
}