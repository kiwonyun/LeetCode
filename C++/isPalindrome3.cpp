class Solution {
public:
    bool isPalindrome(int x) {
        if( x < 0 ) return false;
        
        string str = to_string(x);
        string rev_str = str;
        reverse( rev_str.begin(), rev_str.end() );
        
        return str.compare( rev_str ) == 0 ? true : false;
    }
}