//an array K number of times left rotate
#include <bits/stdc++.h>
using namespace std;

void leftRotate(int arr[], int n, int k)
{
	int mod = k % n;
  
	for (int i = 0; i < n; i++)
		cout << (arr[(mod + i) % n]) << " ";

	cout << "\n";
}

int main()
{
	int arr[];
	int n;
  cout<<"enter the size of the array";
  cin>>n;
  for(i=0;i<n;i++)

	int k = 2;

	leftRotate(arr, n, k);

	k = 3;
  
	leftRotate(arr, n, k);

	k = 4;
  
	leftRotate(arr, n, k);

	return 0;
}
