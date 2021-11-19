#include<iostream>
using namespace std;

int main()
{
    int arr[1000],h,temp,f,total=0;
    int b[1000],flag,x=0;
    int n;
    cin>>n;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
    }
    for(int i=0;i<n;i++)
    {
        for(int j=i+1;j<n;j++)
        {
            if(arr[i]>arr[j])
            {
               temp=arr[i];
               arr[i]=arr[j];
               arr[j]=temp;
            }
        }
    }
    for(int i=0;i<n;)
    { flag=0;
        h=1;
        f=i+1;
        for(int j=i+1;j<n;j++)
        {
           if(arr[i]==arr[j])
            {
                h++;
                f++;
                flag=1;
            }
           
        }
        if(flag==1)i=f;
        else i++;
        ++total;
        b[x]=h;
        x++;
    }
    int max=b[0];
    for(int i=0;i<x;i++)
    {
        if(b[i]>max)max=b[i];
    }
    cout<<max<<" "<<total;
    return 0;
}