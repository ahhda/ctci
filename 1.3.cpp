#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;

bool check(char *s1, char *s2){
	int arr[256] = {0};
	if(strlen(s1) != strlen(s2))
		return false;
	int i;
	for(i=0;i<strlen(s1);i++){
		arr[s1[i]-'0']++;
	}
	for(i=0;i<strlen(s2);i++){
		arr[s2[i]-'0']--;
		if(arr[s2[i]-'0'] < 0)
			return false;
	}
	return true;
}

int main(){
	
	char s1[256];
	char s2[256];
	fgets(s1,sizeof(s1),stdin);
	fgets(s2,sizeof(s2),stdin);
	if(check(s1,s2))
		cout << "Permutation\n";
	else
		cout << "No\n";
}