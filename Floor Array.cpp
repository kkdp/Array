//  USERNAME: krishankantray
//  INSTITUTION: Galgotias University

// Finding floor value of a sorted array using binary search like technique.
// https://www.geeksforgeeks.org/the-ubiquitous-binary-search-set-1/
#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <climits>
#include <map>
#include <algorithm>
#include <cmath>
#include <utility>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define ull unsigned long long int
int arrfloor(int A[], int left, int right, int key)
{
	int mid;
	while(left+1<right)
	{
		mid=(left+right)/2;
		if(A[mid]<=key)
			left=mid;
		else
			right=mid;
	}
	return A[left];
}
int main()
{
	 #ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	 #endif
	 int n;
	 cin>>n;
	 int A[n];
	 for(int i=0; i<n; i++) cin>>A[i];
	 int key;
	cin>>key;
	 cout<<arrfloor(A,0,n-1,key);
	return 0;
}
