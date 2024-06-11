#include<bits/stdc++.h>
using namespace std;
bool isValid(const unordered_map<char, int>& charCount) {
        for (const auto& pair : charCount) {
            if (pair.second > 2)
                return false;
        }
        return true;
    }
int main(){
    string s;
    cin>>s;
    int n = s.length();
        unordered_map<char, int> charCount;
        int left = 0, maxLen = 0;

        for (int right = 0; right < n; ++right) {
            charCount[s[right]]++;

            // Shrink the window from the left side if it violates the condition
            while (charCount.size() > 2 || (charCount.size() == 2 && !isValid(charCount))) {
                charCount[s[left]]--;
                if (charCount[s[left]] == 0)
                    charCount.erase(s[left]);
                left++;
            }

            maxLen = max(maxLen, right - left + 1);
        }

        cout<<maxLen<<endl;
    return 0;
}