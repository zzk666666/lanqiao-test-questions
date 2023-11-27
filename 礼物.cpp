#include<bits/stdc++.h>
using namespace std;
typedef long long ll;
ll N,S,s,j;
vector<ll>num;
int main()
{
	ios::sync_with_stdio(false);
	cin.tie(0);
	cout.tie(0);
	cin>>N>>S;
	num.resize(N+10);
	for(int i=0;i<N;i++)cin>>num[i];
	for(int i=N;i<num.size();i++)num[i]=1e14;
	s=0;
	j=1;
	ll left=0;
	ll right=0;
	for(;j+s<N;j++)
	{
		for(;j-s>0;)
		{
			if(left+num[j-s-1]<=S&&right+num[j+s]<=S)
			{
				left+=num[j-s-1];
				right+=num[j+s];
				s++;
			}else{
				break;
			}
		}
		left=left-num[j-s]+num[j];
		right=right-num[j]+num[j+s];
	}
	cout<<s*2;
	return 0;
}