#include<iostream>
using namespace std;
#define min 0x80000000
int main()
{
	
	int k,data[10002],maxsum=min,thissum=0,first1,first2,last;
	int i;
	cin>>k;
	first1=first2=0;last=k-1;
	for(i=0;i<k;i++)
	{
		cin>>data[i];
		thissum+=data[i];
		if(maxsum<thissum)
		{
			maxsum=thissum;
			last=i;
			first1=first2;
		}
		if(thissum<0)
		{
			thissum=0;
			first2=i+1;
		}
	}
	if(maxsum<0)
	{
		maxsum=0;first1=0;last=k-1;
	}
	cout<<maxsum<<' '<<data[first1]<<' '<<data[last];
	return 0;
 } 
