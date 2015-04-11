#include<iostream>
#include<vector>
using namespace std;

int main()
{
	int a,b,m;
	while(cin>>m && m!=0) 
	{
		cin>>a>>b;
		vector<int> tmp;
		int sum=a+b;
		while(sum!=0)
		{
			tmp.push_back(sum%m);
			sum=sum/m;
		}
		for(int i=tmp.size()-1;i>=0;--i)
		{
			cout<<tmp[i];
		}
		cout<<endl;
	}
	return 0;
}
