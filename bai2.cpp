#include<iostream>

using namespace std;

int CountPaths(int i,int j, int c, int d){
	if(i==c) return 1;
	if(j==d) return 1;
	else return CountPaths(i+1,j,c,d)+CountPaths(i,j+1,c,d);
}
int main(){
	cout<<CountPaths(2,2,3,4);
	return 0;
}
