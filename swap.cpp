#include<iostream>
using namespace std;
void swap(int &n, int &b)
{
	int a;
	a=n;
	n=b;
	b=a;

}
int main()
{
	int t,i;
	cin>>t;
	for(i=0;i<t;i++)
	{
		int a,b,c,j,k,l;
		cin>>a>>b>>c;
		int z[c][2];
		for(j=0;j<c;j++)
		{
			for(k=0;k<2;k++)
			{
				cin>>z[j][k];
			}
			
		}
		int s[a];
		for(j=0;j<a;j++)
		{
			if(j==b-1)
			continue;
			s[j]=0;
		}
		s[b-1]=1;
	
		for(j=0;j<c;j++)
		{
			k=z[j][0];
			l=z[j][1];
		
			int q=s[k-1];
			int h=s[l-1];
			swap(q,h);
			s[k-1]=q;
			s[l-1]=h;
		
		}
	
		for(j=0;j<a;j++)
		{
			if(s[j]==1)
			break;
		}
		cout<<j+1<<endl;
	}
}
