#include<bits/stdc++.h>
using namespace std;
main()
{
     int n,k,a[100],i;
     string s[100]={"Apple","Nahid","faiz","Ahad","Rakib"};
     cin>>n>>k;
     for(i=0;i<n-1;i++)
     {
          //a[i]=a[i];
          if(i>=k)
               s[i]=s[i+1];

     }
     //s[k]="Delowar";
     for(i=0;i<n-1;i++)
     {
          cout<<s[i]<<" ";
     }
}
