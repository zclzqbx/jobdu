#include<iostream>
#include<vector>

using namespace std;

void decimto(int num,vector<int> &vec,const int m)
{//将10进制数转换成任意进制数
	while(num!=0)
	{
		vec.push_back(num%m);
		num=num/m;
	}
}

int main()
{
	int m,a,b;
	while(cin>>m && m!=0)
	{
		cin>>a>>b;
		vector<int> a_vec,b_vec,ab_vec;
		decimto(a,a_vec,m);
		decimto(b,b_vec,m);
		int tmp=0;
		size_t i=0;
		while(i<a_vec.size() || i<b_vec.size())
		{
			int a_tmp,b_tmp;
			if(i>=a_vec.size())
				a_tmp=0;
			else
				a_tmp=a_vec[i];

			if(i>=b_vec.size())
				b_tmp=0;
			else
				b_tmp=b_vec[i];
			ab_vec.push_back((a_tmp+b_tmp+tmp)%m);
			tmp=(a_tmp+b_tmp+tmp)/m;
			++i;
		}
		if(tmp!=0)
		{
			ab_vec.push_back(tmp);
		}
		for(int i=ab_vec.size()-1;i>=0;--i)
		{
			cout<<ab_vec[i];
		}
		cout<<endl;
	}
	return 0;
}
