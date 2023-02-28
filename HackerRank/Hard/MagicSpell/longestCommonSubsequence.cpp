#include <iostream>
#include <string>

using namespace std;

int longestCommonSubsequence(string &a, string &b, int i, int j){
	if(i == a.length() || j == b.length()){
		return 0;
	}

	int ans = 0;
	if(a[i] == b[j]){
		ans = 1 + longestCommonSubsequence(a, b, i+1, j+1);
	}
	else{
		ans = max(longestCommonSubsequence(a, b, i+1, j), longestCommonSubsequence(a, b, i, j+1));
	}
	return ans;
}

int main(){
	string a, b;
	cin >> a >> b;
	cout << "length of Longest Common Subsequence : " << longestCommonSubsequence(a, b, 0, 0);
}
