#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int arr[100];
    float sum=0;
    for(int i=0;i<n;i++)
    {
        cin>>arr[i];
        sum+=arr[i];
    }
    cout<<sum/n;

}
