#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number of test cases="<<endl;
    int T;cin>>T;
    for(int t=0;t<T;t++)
    {
        cout<<"Enter limit of array="<<endl;
        int n;cin>>n;
        int a[n];
        cout<<"Enter array elements="<<endl;
        for(int i=0;i<n;i++)
            cin>>a[i];
        int swaps=0;
        int comparisions=0;
    for(int i=1;i<n;i++)
    {
        comparisions++;
        int temp=a[i];
        int j=i-1;
        while(j>=0 && a[j]>temp)
        {
            comparisions++;
            a[j+1]=a[j];
            j--;
            swaps++;
        }
        a[j+1]=temp;
    }
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++)
    cout<<a[i]<<" ";
    cout<<endl;
    cout<<"Number of swaps="<<swaps<<endl;
     cout<<"Number of comparisions="<<comparisions<<endl;
    }
}
