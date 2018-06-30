#include<iostream>
using namespace std;
int main()
{

int n;
cin>>n;


for(int i=1;i<n;i++)
{
int left=n-i,right=n+i;

    for(int j=1;j<2*n;j++)
    {

      if(j>left&&j<right)
       cout<<" ";
       else
       cout<<"*";
    }
cout<<endl;

}
for(int i=1;i<=n-1;i++)
{

    int left=i+1,right=2*n-i;

    for(int j=1;j<=2*n-1;j++)
  {
    if(j>left&&j<right)
     cout<<" ";
     else
     cout<<"*";

  }

cout<<endl;
}




  return 0;
}
