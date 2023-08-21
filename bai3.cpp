#include<iostream>

using namespace std;

static int i=0;
void HanoiTower(int n,char a,char c, char b){
	if(n==1) {
	cout<<"Chuyen dia tu coc "<<a<<" sang coc "<< c<<endl; i++; }
	else{
	
	HanoiTower(n-1,a,b,c);
	HanoiTower(1,a,c,b);
	HanoiTower(n-1,b,c,a);
}
}
int main(){
	HanoiTower(5,'a','b','c');
	cout<<i;
	return 0;
}
