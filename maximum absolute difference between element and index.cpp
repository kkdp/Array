//  USERNAME: krishankantray
//  INSTITUTION: Galgotias University
/*

See the whiteboard image in the link:  https://drive.google.com/file/d/1AGaYJ0anvc6fSW20HzNuhQmFoQYzohXI/view?usp=sharing
or
geeksforgeeks: https://www.geeksforgeeks.org/maximum-absolute-difference-value-index-sums/
*/

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

int main()
{
	 #ifndef ONLINE_JUDGE
	  freopen("input.txt","r",stdin);
	  freopen("output.txt","w",stdout);
	 #endif
	 int n,mx1=INT_MIN, mx2=INT_MIN,mn1=INT_MAX,mn2=INT_MAX;
	 cin>>n;
	 int arr[n];
	 for(int i=0; i<n ;i++) cin>>arr[i];
	 for(int i=0; i<n ;i++)
	 {
	 	mx1=max(mx1,arr[i]+i);
	 	mx2=max(mx2,arr[i]-i);
	 	mn1=min(mn1,arr[i]+i);
	 	mn2=min(mn2,arr[i]-i);
	 }
	 cout<<max(mx1-mn1,mx2-mn2);
	return 0;
}
