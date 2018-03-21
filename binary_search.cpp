#include<bits/stdc++.h>
using namespace std;
main()
{
     int beg=0,end=9,mid,a[100]={1,2,3,4,5,6,7,8,9,10};
     for(int i=0; i<log(10)+1;i++)
     {
          mid=(beg+end)/2;
          if(a[mid]>8 )
          {
               end=mid-1;

          }
          else if(a[mid]<8 )
          {
               beg=mid+1;
          }
          else if(a[mid]==8 )
          {
               cout<<mid;
               break;
          }
     }
     if(a[mid]!=8)
          cout<<"not found";

return 0;
}
