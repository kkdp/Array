#include<iostream>
#include<stack>
#include<climits>
#include<bits/stdc++.h>
using namespace std;

int partition(int arr[],int n, int piv)
{
	int i;
	for(i=0; i<n; i++)
		if(arr[i]==piv)
			break;
	swap(arr[i],arr[n-1]);
	i=0;
	for(int j=0; j<n-1; j++)
		if(arr[j]<=piv){
			swap(arr[j],arr[i]);
			i++;
		}
	swap(arr[i],arr[n-1]);
	return i;
}

int ksmall(int arr[],int n, int k)
{
	int median[n/5 +1],i;
	for(i=0; i<(n/5); i++)
	{
		sort(arr+(i*5),arr+(i*5 +4));
		median[i]=arr[(i*5)+2]; 
	}
	if(i*5 <n)
		median[i]=arr[(n+(i*5))/2];
	i++;
	int med;
	if(i==1)
		med=median[0];
	else
		med=ksmall(median, i,i/2);

	int pos=partition(arr,n,med);
	if((k-1)==pos)
		return arr[pos];
	else
		if((k-1)<pos)
		{
			return ksmall(arr,pos,k);
		}
		else
			return ksmall(arr+pos+1,n,k);

		return INT_MAX;

}

int main()
{
	int n;
	cin>>n;
	int arr[n];
	for(int i=0; i<n; i++)
		cin>>arr[i];
	// finding kth smallest number
	int k;
	cin>>k;
	cout<< ksmall(arr,n,k);
	return 0;
}
