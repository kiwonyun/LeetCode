class Solution {
public:
    string toHex(int num) {
        if(num == 0) return "0";
        string strHex;
        char hex_map[16] = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
        for(int i = 0; i < 8; i++){
            strHex.insert(0, 1, hex_map[num & 0xf]);
            num >>= 4;
        }
        
        // remove '0' from the front
        while(strHex[0] == '0')
            strHex.erase(0, 1);
        
        return strHex;
    }
};