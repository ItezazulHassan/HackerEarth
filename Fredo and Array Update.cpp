#include<iostream>
#include <bits/stdc++.h>
#include <numeric>
using namespace std;
int compare(const void * a, const void * b)
{
    return ( *(int*)a - *(int*)b );
}
int main()
{
	int num;
	cin>>num;
	int *arr=new int[num];
	for(int i=0;i<num;i++){
		cin>>arr[i];
	}
	qsort(arr,num,sizeof(int),compare);
	int sum=0;
	sum = accumulate(arr, arr+num, sum);
	int new_num=arr[0];
	int n=1;
	// for(int i=num-1;i>=0;i--){
	// 	if(n*num>sum){
	// 		new_num=arr[i];
	// 	}
	// 	else{
	// 		n++;
	// 	}
	// }
	while(n*num<=sum){
		n++;
	}
	cout<<n;
}