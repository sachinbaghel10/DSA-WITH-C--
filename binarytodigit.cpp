#include<iostream>
using namespace std; 


int B_to_D(int arr[], int size)
{     
      int base=1; 
      int dec_value=0; 
    
    for(int i=size-2; i>=0; i--)
     {
        while(arr[i]>0)
         {
          //int i=arr[size-2];
            for(int i=1; i<=i; i++)
             {   
                dec_value+=base; 
                //int sum = sum+ (2*2);
                base=base*2; //change to in git
             }
            
          
         }
                
     }
     return dec_value;   
}


int main()
{  int size=4; 
  int arr[]={1,0,1,0};
  cout<<B_to_D(arr,size);
  return 0;

}