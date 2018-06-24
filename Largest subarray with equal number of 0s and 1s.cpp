  #include <bits/stdc++.h>
  #include <cstdio>
  #include <cstring>
  #include <cmath>
  #include <string>
  #include <chrono>
  #include <complex>
  
  using namespace std;
 
  int main()
  {
   vector<int>v={1, 0, 1, 1,1,1,1,0,0,0,1,1,0,1};
   for(int i=1; i<v.size(); i++)
    if(v[i]==1)
      v[i]+=v[i-1];
    else
      v[i]=v[i-1]-1;
    map<int,int>momo;
    int s,m=0,e;

    for(int i=0; i<v.size(); i++)
    {
      if(v[i]==0)
      {
        if(i+1>m)
        {
          s=0;
          e=i;
        }
      }
      else
      {
        if(momo.find(v[i])==momo.end())
          momo[v[i]]=i;
        else
        {
          if(m<(i-momo[v[i]]+1)){
          s=momo[v[i]]+1;
          m= (i-momo[v[i]]+1);
          e=i;
        }

        }

      }
    }
    cout<<s<<"   "<<e;
   
   return 0;
  }
