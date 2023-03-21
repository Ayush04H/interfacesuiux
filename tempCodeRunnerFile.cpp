#include<bits/stdc++.h>
using namespace std;
int bs(int n,int arr[],int key){
	int l,r;
	l=0;
	r=n-1;
	int m;
	while(l<=r){
		m=(l+r)/2;
		if(key==arr[m]){
			return m+1;
		}
		else if(key<arr[m]){
			r=m-1;
		}
		else{
			l=m+1;
		}
	}
	return -1;
}
int main(){
	int n;
	cout<<"Enter the size\n";
	cin>>n;
	int arr[n];
	cout<<"Enter the element\n";
	for(int i=0;i<n;i++){
		cin>>arr[i];
	}
	int key;
	cout<<"Enter the key\n";
	cin>>key;
	int a=bs(n,arr,key);
	cout<<a;
}