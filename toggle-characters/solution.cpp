#include<bits/stdc++.h>
using namespace std;

void toggleCharacters(string &s) {
	for(int i=0; i<s.length(); i++) {
		if('a' <= s[i] && s[i] <= 'z') {
			s[i] -= 32;
		}
		else if('A' <= s[i] && s[i] <= 'Z') {
			s[i] += 32;
		}
	}
}

int main() {
	string s;
	cin >> s;
	toggleCharacters(s);
	cout << s;
	return 0;
}