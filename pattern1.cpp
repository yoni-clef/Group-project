#include <iostream>
using namespace std;


int main() {

for(int i=0;i<=9;i++)
{
    for(int j=0;j<i+1;j++)
    {
        cout<<j;
    }
    for(int k=9;k>i;k--)
    {
        cout<<" ";
    }

    for(int l=1;l<9-i;l++)
    {
        cout<<" ";
    }
    for(int m=i;m>=0;m--)
    if(m !=9 )
    {
        cout<<m;

    }
     cout<<"\n";

}

for(int i=1;i<=9;i++)
{
  for(int j=0;j<=9-i;j++)
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
  for(int m=9-i;m>=0;m--)
  {
      cout<<m;
  }


      cout<<endl;


}
return 0;}
