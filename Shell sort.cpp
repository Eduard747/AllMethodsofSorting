#include<iostream>
 
using namespace std;
void ShellSort(int a[], int n)
{
	int i, j, k, temp;

	for(i = n/2; i > 0; i = i/2)
	{
		for(j = i; j < n; j++)
		{
			for(k = j-i; k >= 0; k = k-i)
			{
				
				if(a[k+i] >= a[k])
				break;
				
				else
				{
					temp = a[k];
					a[k] = a[k+i];
					a[k+i] = temp;
				}
			}
		}
	}
}
int main()
{	
	int n, i;
	cout<<"Enter the number of data element to be sorted: "<<endl
	cin>>n;
 
	int x[n];
	for(i = 0; i < n; i++)
	{
		cout<<"Enter element "<<i+1<<": ";
		cin>>x[i];
	}
 
	ShellSort(x, n);
 
	
	cout<<"Sorted Data "<<endl;
	for (i = 0; i < n; i++)
		cout<<"->"<<x[i];
 
	return 0;
}
