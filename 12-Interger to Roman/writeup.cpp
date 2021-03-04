class Solution {
public:
    string intToRoman(int num) {
        string ans;
        int cnt = 0;
        // thound
        cnt = num / 1000;
        if(cnt) {
            for(int i = 0; i < cnt; i++) {
                ans += "M";
                num -= 1000;
            }
        }
        // hundred
        cnt = num / 100;
        if(cnt ==  9) { 
            ans += "CM";
            num -= 900;
        }
        else if(5 <= cnt && cnt < 9) {
            ans += "D";
            num -= 500;
            cnt = num / 100;
            for(int i = 0; i < cnt; i++) {
                ans += "C";
                num -= 100;
            }
        }
        else if(cnt == 4) { 
            ans += "CD";
            num -= 400;
        }
        else {
            for(int i = 0; i < cnt; i++) {
                ans += "C";
                num -= 100;
            }
        }
        // ten
        cnt = num / 10;
        if(cnt ==  9) { 
            ans += "XC";
            num -= 90;
        }
        else if(5 <= cnt && cnt < 9) {
            ans += "L";
            num -= 50;
            cnt = num / 10;
            for(int i = 0; i < cnt; i++) {
                ans += "X";
                num -= 10;
            }
        }
        else if(cnt == 4) { 
            ans += "XL";
            num -= 40;
        }
        else {
            for(int i = 0; i < cnt; i++) {
                ans += "X";
                num -= 10;
            }
        }
        // one
        if(num ==  9) { 
            ans += "IX";
        }
        else if(5 <= num && num < 9) {
            ans += "V";
            num -= 5;
            for(int i = 0; i < num; i++) {
                ans += "I";
            }
        }
        else if(num == 4) { 
            ans += "IV";
        }
        else {
            for(int i = 0; i < num; i++) {
                ans += "I";
            }
        }
        
        return ans;
    }
};