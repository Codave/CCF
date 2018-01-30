#include<iostream>
#include<cstdio>
#include<algorithm>
using namespace std;
const int maxn=10010;
int hashTable[maxn]={0};

int main(){
	int n,m;
	cin>>n;
	for(int i=0;i<n;i++){
		cin>>m;
		hashTable[m]++;
	}
	int ans=-1,x;
	for(int i=0;i<maxn;i++){
		if(hashTable[i]>ans){
			ans=hashTable[i];
			x=i;
		}
	}
	cout<<x;
	
	return 0;
}
