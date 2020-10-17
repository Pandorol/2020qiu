#include<iostream> 
using namespace std;
int main()
{
	int k,data[100002];
	int i,j;
	int maxnum=0;
	int thisnum=0;
	cin>>k;
	for(i=0;i<k;i++)
	{
		cin>>data[i];
		thisnum+=data[i];
		if(thisnum>maxnum)
		{
			maxnum=thisnum;
		}
		if(thisnum<0)
		{
			thisnum=0;
		}
	}
	cout<<maxnum;
	return 0;
}
