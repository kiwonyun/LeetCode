class Solution {
public:
    bool isPalindrome(string s) {
        if( s.length() == 0 ) return true;
        transform( s.begin(), s.end(), s.begin(), ::tolower );
        
        string str = "";
        for(int i = 0; i < s.length(); i++){
            if( isalnum(s[i]) )
                str += s[i];
        }
        
        string rev_s = str;
        reverse( rev_s.begin(), rev_s.end() );
        
        printf("%s\n", rev_s.c_str());
        
        return str.compare( rev_s ) == 0 ? true : false;
    }
};