#include <iostream>
#include <cstring>
using namespace std;

int main(){
	string s,s1,s2;
	int i,j,k,l;
	cin >> s;
	int arr[256];
	int flag = 0;
	memset(arr,0,sizeof(arr));
	for(i=0;i<s.length();i++){
		j = s[i]-'a'+1;
		arr[j]++;
		if(arr[j]>1){
			flag = 1;
			break;
		}
	}
	if(flag == 1)
		cout << "Not unique";
	else
		cout << "Unique";
	return 0;
}