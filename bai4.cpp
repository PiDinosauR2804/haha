#include<iostream>
#include<ctime>
using namespace std;


unsigned long long int a[10][10];
unsigned long long int K(int c,int k){
	if(c==k||k==0) return 1;
	else return K(c-1,k-1) +K(c-1,k);
}
unsigned long long int K1(int c,int k){
	if(a[c][k]!=0) return a[c][k];
	else {
		a[c][k]=K(c-1,k-1) +K(c-1,k);
		return a[c][k];
	}
}


int main(){
	clock_t start,end;
		cout<<"De quy co nho: "<<endl;
	start=clock();
	cout<<K1(35,20)<<endl;
	end=clock();
	double time=(end-start)/CLOCKS_PER_SEC;
	cout<<"Thoi gian tinh: "<<time<<"s"<<endl;
	cout<<"De quy khong nho: "<<endl;
	start=clock();
	cout<<K(35,20)<<endl;
	end=clock();
	time=(end-start)/CLOCKS_PER_SEC;
	cout<<"Thoi gian tinh: "<<time<<"s"<<endl;
	return 0;
}
