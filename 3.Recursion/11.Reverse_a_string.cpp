// Method 1;

// #include <iostream>
// using namespace std;

// string ReverseString(string s){
//     if (s.size()==0){
//         return "";
//     }
//     if (s.size()==1){
//         return s ;
//     }
//     swap(s[0],s[s.size()-1] );

//     return s[0] + ReverseString(s.substr(1,s.size()-2)) + s[s.size()-1];

// }

// int main(){
//     string s = "abcdef";
//     cout << s.size() << endl;
//     string ans = ReverseString(s);
//     cout << ans << endl;
// }

// Method 2;

#include <iostream>
using namespace std;

void ReverseString(string& s, int start , int end){
    if (start > end){
        return;
    }

    swap(s[start],s[end]);

    ReverseString(s,start + 1, end - 1) ;

}

int main(){
    string s = "abcde";
    cout << s.size() << endl;
    int start = 0;
    int end = s.size()-1 ;
    ReverseString(s, start , end);
    cout << s << endl;
}