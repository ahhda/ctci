#include<iostream>
#include<string.h>
#include<stdio.h>
#include<sstream>
using namespace std;

void replace(string &s1, int l){
	int newLenght, i,spaces=0;
	for(i=0;i<l;i++){
		if(s1[i] == ' ')
			spaces++;
	}
	//cout << spaces << endl;
	newLenght = spaces*2 + l;
	s1[newLenght] = '\0';
	//cout << s1 << endl;
	for(i=l-1;i>0;i--){
		if(s1[i] == ' '){
			s1[newLenght-1] = '0';
			s1[newLenght-2] = '2';
			s1[newLenght-3] = '%';
			newLenght = newLenght-3;
		}
		else{
			s1[newLenght-1] = s1[i];
			newLenght--;
		}
	}
}

int main(){
	//char s[256];
	string s1;
	int l;
	cout << "Enter true length" << endl;
	getline(cin, s1);
	stringstream myStream(s1);
	myStream >> l;
	getline(cin, s1);
	//cout << s1.length() << endl;
	//cout << s1 << endl;
	replace(s1, l);
	cout << s1 << endl;
}