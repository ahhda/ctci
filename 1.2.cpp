#include<iostream>
#include<string.h>
#include<stdlib.h>
#include<stdio.h>
using namespace std;

void rev(char *word){
	char *end = word;
	char c;
	if(word){
		while(*end){
			++end;
		}
		--end;
		while(word < end){
			c = *word;
			*word++ = *end;
			*end-- = c;
		}
	}
}

int main(){
	char word[256];
	fgets(word, sizeof(word), stdin);
	rev(word);
	cout << word;
}