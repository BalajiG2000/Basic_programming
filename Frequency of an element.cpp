#include <bits/stdc++.h>
using namespace std;

int mostFrequent(int arr[], int n)
{
	sort(arr, arr + n);
	int max_count = 1, res = arr[0], curr_count = 1;
	for (int i = 1; i < n; i++) {
		if (arr[i] == arr[i - 1])
			curr_count++;
		else {
			if (curr_count > max_count) {
				max_count = curr_count;
				res = arr[i - 1];
			}
			curr_count = 1;
		}
	}
	if (curr_count > max_count)
	{
		max_count = curr_count;
		res = arr[n - 1];
	}

	return res;
}
int main()
{
	int n ;
	cout<<"ENTER THE NUMBER OF ELEMENTS IN THE ARRAY::\n";
	cin>>n;
	cout<<"EMTER THE ELEMENTS OF THE ARRAY::\n";
	int arr[n];
	for(int i=0;i<n;i++)
        cin>>arr[i];
	cout <<"THE MOST FREQUENT OCCURING NUMBER IS  "<< mostFrequent(arr, n);
	return 0;
}
