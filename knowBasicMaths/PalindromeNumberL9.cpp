#include<bits/stdc++.h>
using namespace std;
class Solution {
public:
    bool isPalindrome(int x) {
        if(x < 0) return false;
        else{
            int ans = 0;
            int temp = x;
            while(temp){
                if(ans > INT_MAX /10) return false;
                ans = ans*10 + temp%10;
                temp /= 10;
            }
        if(ans == x) return true;
        else return false;
        }
    }
};
int main(){
Solution sol;
cout<<sol.isPalindrome(121);
cout<<sol.isPalindrome(-121);
cout<<sol.isPalindrome(223343322);
return 0;
}