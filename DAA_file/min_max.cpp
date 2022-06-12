# include<iostream>
using namespace std;


int Max(int arr[], int index, int l)
{
	int max;
	if(index >= l - 2)
	{
		if(arr[index] > arr[index + 1])
		return arr[index];
		else
		return arr[index + 1];
	}
	max = Max(arr, index + 1, l);
	if(arr[index] > max)
	return arr[index];
	else
	return max;
}

int Min(int arr[], int index, int l)
{
	int min;
	if(index >= l - 2)
	{
		if(arr[index] < arr[index + 1])
		return arr[index];
		else
		return arr[index + 1];
	}
	
	min = Min(arr, index + 1, l);
	if(arr[index] < min)
	return arr[index];
	else
	return min;
}

int main()
{
	int arr[] = {0, 34, 54, 32, 58, 11, 90};
	int n = sizeof(arr) / sizeof(arr[0]);
	int max, min;
	max = Max(arr, 0, n);
	min = Min(arr, 0, n);
	cout << "Maximum: " << max << endl;
	cout << "Minimum: " << min << endl;
	return 0;
}

