#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
	int n;
	vector<string> words;
	string s;
	string temp;
	cin>>n;
	for(int i = 0 ; i < n ; i++){
		cin>>s;
		if(s.length() > 10){
			temp = s[0] + to_string(s.length()-2) + s[s.length()-1];
			words.push_back(temp);
		} else {
			words.push_back(s);
		}
	}

	for(int i = 0 ; i < words.size() ; i++){
		cout<<words[i]<<endl;
	}
	return 0;
}
