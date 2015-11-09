#include<iostream>
#include<string.h>
#include<string>
#include<stdio.h>
#include<sstream>
using namespace std;

int main(){
	string s1;
	cin >> s1;
	int i,count = 1;
	char c;
	string s2 = "";
	c = s1[0];
	std::stringstream conv;
	for(i=1;i<=s1.length();i++){
		if(c != s1[i]){
			s2 += c;
			conv.str("");
			conv.clear();
			conv << count;
			s2 += conv.str();
			c = s1[i];
			count = 1;
		}
		else{
			count++;
		}
	}
	if(s1.length() <= s2.length())
		cout << s1 << endl;
	else
		cout << s2 << endl;
}