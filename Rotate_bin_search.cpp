#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int RotateBS(int low,int high,int a[],int T)
{
	while(low<=high)
	{
		int mid=low+high>>1;
		if(T==a[mid])
		{
			return mid;
		}
		if(a[mid]<a[0])
		{
			if(T>=a[0]||T<a[mid])	
			{
				high=mid-1;
			}
			else
			{
				low=mid+1;
			}
		}
		else
		{
			if(T<a[0]||T>a[mid])
			{
				low=mid+1;
			}
			else
			{
				high=mid-1;
			}
		}
    }
    return -1;
}

int main()
{
	int n,T;
	cin>>n>>T;
	int a[n];
	for(int i=0;i<n-1;i++)
	{
		cin>>a[i];
	}
	cout<<RotateBS(0,n-1,a,T);
	return 0;
	
}
