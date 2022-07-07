#include<bits/stdc++.h>
using namespace std; 

void Bubble_sort(vector<int> &arr, int n,int &y)
{
    for(int i=1 ; i<n; i++)
    {
      for(int j=0; j<n-i ; j++)
      {
        if(arr[j]>arr[j+1])
        {
             swap(arr[j],arr[j+1]);
        }
      }
    }

    y=8;
}

int main()
{
    vector<int> arr; //{23,34,2,4,8,23,1};

    int n=7;
    int y=10;
    // int arr[n];
    int val;

    for(int i=0 ; i<n ; i++)
    {
        cin>>val;
        arr.push_back(val);
    }
    
    Bubble_sort(arr,7,y);

    for(int i=0; i<7; i++)
    {
        cout<<arr[i]<<" "; 
    }
    cout<<endl;
    cout<<y;
    return 0; 
}