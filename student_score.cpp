#include <iostream>
#include <vector>

using namespace std;

int main()
{
	int N=0;
	while(cin>>N && N!=0)
	{
		vector<int> score(N,0);
		int i=0,stmp;
		while(i<N && cin>>stmp)//people can be computed
		{
			score[i]=stmp;
			++i;
		}
		int fixed_score;
		cin>>fixed_score;
		int num=0;
		for(int i=0;i<N;++i)
		{
			if(score[i]==fixed_score)
			{
				num++;
			}
		}
		cout<<num<<endl;
	}
	return 0;
}
