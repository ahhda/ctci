#include<iostream>
#include<string.h>
#include<stdio.h>

using namespace std;

void rotate(int n, int *arr){
	int i,j;
	int layer;
	for(layer=0;layer < n/2;layer++){
		int first = layer;
		int last = n-1-layer;
		for(i=first;i<last;i++){
			int off = i-first;
			int temp = *((arr+first*n)+i);
			*((arr+first*n)+i) = *((arr+(last-off)*n)+first);
			*((arr+(last-off)*n)+first) = *((arr+(last)*n)+last-off);
			*((arr+(last)*n)+last-off) = *((arr+(i)*n)+last);
			*((arr+(i)*n)+last) = temp;
		}
	}
}

int main(){
	int n;
	cin >> n;
	int arr[n][n];
	int i,j;
	for(i=0;i<n;i++)
		for(j=0;j<n;j++)
			cin >> arr[i][j];
	rotate(n, (int *)arr);
	for(i=0;i<n;i++){
		for(j=0;j<n;j++)
			cout << arr[i][j] << " ";
		cout << endl;
	}
}