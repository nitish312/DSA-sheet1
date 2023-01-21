#include<bits/stdc++.h>
using namespace std;

int main(){

	string s;
	getline(cin, s);

	int n = s.size();
	vector<string> words;
	string temp;
	for(int i = 0; i < n; i++){
		if(s[i] == ' '){
			if(temp.size()){
				words.push_back(temp);
				temp = "";
			}
		}
		else{
			temp += s[i];
		}
	}
	if(temp.size()){
		words.push_back(temp);
	}
	
	string ans = words[0];
	int maxi = 0;
	n = words.size();
	for(int i = 0; i < n; i++){
		unordered_map<char,int> mp;
		for(auto ch: words[i]){
			mp[ch]++;
		}
		int curr = 0;
		for(auto ele: mp){
			if(ele.second > 1){
				curr++;
			}
		}
		if(curr > maxi){
			maxi = curr;
			ans = words[i];
		}
	}

	if(maxi == 0){
		cout << -1 << "\n";
	}
	else{
		cout << ans << endl;
	}

	return 0;
}