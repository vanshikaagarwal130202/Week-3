#include<iostream>
using namespace std;
int main()
{
    cout<<"Enter the number of test cases=";
    int T;cin>>T;
    for(int t=0;t<T;t++)
    {
    cout<<"Enter the limit=";
    int n;cin>>n;
    int a[n];
    cout<<"Enter the unsorted array elements=";
    for(int i=0;i<n;i++)
        cin>>a[i];
        int j,swaps=0,c=0;
    for(int i=0;i<n-1;i++)
    {
        int min=i;
        for(j=i+1;j<n;j++)
        {
            c++;
            if(a[min]>a[j])
                min=j;
        }
        if(min!=i)
        {
            int temp=a[i];
            a[i]=a[min];
            a[min]=temp;
            swaps++;
        }
    }
    cout<<"Sorted array:"<<endl;
    for(int i=0;i<n;i++)
        cout<<a[i]<<endl;
    cout<<"Number of comparisions="<<c<<endl;
    cout<<"Number of swaps="<<swaps<<endl;

}
}
