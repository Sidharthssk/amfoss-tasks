#include<iostream>
using namespace std;

int main()
{
    int dev[102],pro[102];
    int n=0,m=0,i,temp=0,res=0,j;
    cin>>n>>m;
    for( i=0;i<n;i++)
    cin>>dev[i];
    for( i=0;i<m;i++)
    cin>>pro[i];
    for(i=0;i<n;i++)
    {
        for(j=i+1;j<n;j++)
        {
            if(dev[i]>dev[j])
            {
                temp=dev[i];
                dev[i]=dev[j];
                dev[j]=temp;
            }
        }
    }
    for(i=0;i<m;i++)
    {
        for(j=i+1;j<m;j++)
        {
            if(pro[i]>pro[j])
            {
                temp=pro[i];
                pro[i]=pro[j];
                pro[j]=temp;
            }
        }
    }
    if(dev[(n-1)]>=pro[m-1])
    {
        cout<<"NO";
        
    }
    else
  {
    cout<<"YES"<<endl;
    for(i=0;i<n;i++)
    {  
        for(j=0;j<m;j++)
        {
            if(pro[j]>dev[i])
            {
               res+=pro[j];
               for(int k=j;k<m;k++)
               {
                   pro[k]=pro[k+1];
               }
               m-=1;
               break;
            }
            
        }
    }
    cout<<res;
  }
   
    return 0;
}