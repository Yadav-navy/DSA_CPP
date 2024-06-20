#include <iostream>
using namespace std;

bool CheckPalindrome(string s, int start ,int end){
    if (start > end){
        return true;
    }
    if (s[start] != s[end]){
        return false;
    }
    return CheckPalindrome(s, start + 1, end -1 );

}

int main(){
    string s = "abcbba";
    cout << s.size() << endl;
    int start = 0;
    int end = s.size() - 1;
    bool ans = CheckPalindrome(s, start , end);
    cout << ans << endl;


}