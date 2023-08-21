#include<stdio.h>
#include<iostream>
#include<stack>

using namespace std;

void calculation(int a[],int n,int s[]){
	stack<int> k;
	k.push(0);
	for(int i=1;i<n;i++){
		while((!k.empty())&&a[i]>=a[k.top()]){
			k.pop();
		}
		s[i]=(k.empty())?i:(i-k.top()-1);
		k.push(i);
	}
}



int main (){
	int a[]={100,60,65,101,70,66,80};
	int n= sizeof(a)/sizeof(int);
	int s[n];
	s[0]=0;
	calculation(a,n,s);
	for(int i=0;i<n;i++){
		cout<<" "<<s[i];
	}
	return 0;
	
}
