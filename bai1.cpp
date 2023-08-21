#include<iostream>

using namespace std;

bool Palinedrone(string s,int start, int end){
	if(start>=end) return true;
	if(s[start]!=s[end]) return false;
	return Palinedrone( s,  start+1,  end-1);
}


int main() {
	string s="NOON";
	int end=s.length();
	if(Palinedrone(s,0,end-1)) cout<<"true";
	else cout<<"false";
	return 0;
}
