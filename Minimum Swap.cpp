#include <iostream>
#include <cstdio>
#include <vector>
#include <set>
#include <climits>
#include <map>
#include <algorithm>
#include <cmath>
#include <utility>
#include <string>
#include <cstring>
#include <deque>
using namespace std;
#define ll long long int
#define pb push_back
#define mp make_pair
#define ull unsigned long long int
#include <bits/stdc++.h>
using namespace std;
#define mod 1000000007

int main() {

  
  //Minimum number of swaps required to sort an array
  int n;
  cin>>n;
  vector<int> arr(n);
  map<int,int>m;
  map<int,bool>vis;
  for(int i=0; i<n; i++)
  {
    cin>>arr[i] ;
    vis[arr[i]]=false;
  }
  vector<int>srt(arr);
  sort(srt.begin(), srt.end());
  for(int i=0; i<n; i++)
    m[srt[i]]=i;
  int ctr=0,ans=0;
  for(int i=0; i<n; i++)
  {
    int j=i;
    ctr=0;
    while(!vis[arr[j]])
    {
      
      vis[arr[j]]=true;
      ctr++;
      j=m[arr[j]];
      
    }
    if(ctr>0)
    ans+=(ctr-1);
  }
  cout<<ans<<endl;
  return 0 ;
  }
