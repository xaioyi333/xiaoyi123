#include<iostream>
#include<string>
using namespace std;
int main() {
	string s;
	int b[26] = {0};
	cin >> s;
	
	
	for (int i = 0; i < s.size(); i++) {
		b[s[i] - 'a']++;//ASCIIÂë
	}
	int max = 0, j=0;
	for (int i = 0; i < 26; i++) {
		
		if ( b[i]>max){
			max = b[i];
		j = i;
		
		}
	}
	cout << (char)(j + 'a') << endl << max;
	return 0;
}
