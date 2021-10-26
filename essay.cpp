#include <iostream>
#include <bits/stdc++.h>
using namespace std;

int main()
{
	int n;
	cout<<"Masukkan jumlah data: ";
	cin>>n;
	
	int arr[n];
	
	for (int i=0;i<n;i++)
    {
    	cout<<"Masukkan data ke-"<<i+1<<" = ";
    	cin>>arr[i];
    	
  	}
  	
  	int m = sizeof(arr) / sizeof(arr[0]);
  	sort(arr, arr + m);
  	
  	
    cout << arr[m-1] << " " << arr[m-2];
 
    return 0;
}
