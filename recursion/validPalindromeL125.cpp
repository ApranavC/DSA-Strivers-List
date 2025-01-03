#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(string s) {
        int j = s.length();
        int i = 0;
        while(i < j){
            if(!isalnum(s[i])) {i++;continue;}
            if(!isalnum(s[j])) {j--;continue;}
            if(tolower(s[i]) != tolower(s[j])){return false;}
            else{
                i++;
                j--;
            }
        }
        return true; 
    }
};
int main(){
    Solution sol;
    cout<<sol.isPalindrome("is a man nam a si");
}