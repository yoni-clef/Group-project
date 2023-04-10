#include <iostream>
using namespace std;


int main() {

for(int i=0;i<=n;i++)
{
    for(int j=0;j<i+1;j++)
    {
        cout<<j;
    }
    for(int k=n;k>i;k--)
    {
        cout<<" ";
    }

    for(int l=1;l<n-i;l++)
    {
        cout<<" ";
    }
    for(int m=i;m>=0;m--)
    if(m !=n )
    {
        cout<<m;

    }
     cout<<"\n";

}

for(int i=1;i<=n;i++)
{
  for(int j=0;j<=n-i;j++)
      {
          cout<<j;
      }
  for(int k=i-1;k>0;k--)
      {
      cout<<" ";
      }
  for(int l=0;l<i;l++)
  {
      cout<<" ";
  }
  for(int m=n-i;m>=0;m--)
  {
      cout<<m;
  }


      cout<<endl;


}
return 0;}
