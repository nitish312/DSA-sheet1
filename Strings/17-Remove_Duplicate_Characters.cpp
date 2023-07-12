// remove duplicate letters from string & You must make sure your result is the smallest in lexicographical order among all possible results.
// https://www.youtube.com/watch?v=j313ttNJjo0&ab_channel=TECHDOSE
#include<iostream>
#include<unordered_set>
using namespace std;

// 1. monotonic stk ? O(N) : O(N)
string removeDuplicateLetters(string s) 
{
    int n = s.size();
    vector<int> freq(26,0); // track index of last occurence of ele
    
    for(int i=0; i<n; i++) freq[s[i]-'a']++;
    
    stack<char> stk; // monotonic stack to maintain incresing order
    
    vector<bool> visited(26, false);
    
    for(int i=0; i<n; i++)
    {
        if(visited[s[i]-'a']) // dont process but still -- the freq
        {
            freq[s[i]-'a']--;
            continue;
        }
        
        // pop all larger chars from curr char & remove from visited
        while(!stk.empty() && stk.top()>s[i] && freq[stk.top()-'a'] > 0)
        {
            visited[stk.top()-'a']=false;
            stk.pop();
        }
        
        stk.push(s[i]);
        visited[s[i]-'a'] = true;
        freq[s[i]-'a']--;
    }
    
    string ans = "";
    while(!stk.empty())
    {
        ans.push_back(stk.top());
        stk.pop();
    }
    
    reverse(ans.begin(),ans.end());
    
    return ans;
}

int main(){

	string str = "cbacdcbc";

	string ans = removeDuplicate(str);

	cout<<str<<endl;
	cout<<ans<<endl;

	return 0;
}