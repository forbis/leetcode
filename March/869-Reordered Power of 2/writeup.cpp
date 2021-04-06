class Solution {
public:
    bool reorderedPowerOf2(int N) {
        long long int two_pow = 1;
        string pow_str = to_string(two_pow);
        string target = to_string(N);
        bool is_pow = false;

        while(pow_str.length() <= target.length()) {
            // cout << pow_str << endl;
            if(pow_str.length() == target.length()) {
                for(auto c:pow_str) { 
                    /*
                    cout << c << " = ";
                    cout << count(pow_str.begin(), pow_str.end(), c);
                    cout << " : ";
                    cout << count(target.begin(), target.end(), c) << endl;
                    */
                    if(count(pow_str.begin(), pow_str.end(), c) != count(target.begin(), target.end(), c)) {
                        is_pow = false;
                        break;
                    } 
                    else { is_pow = true; }
                }
            }

            if(is_pow) { return true; }
            two_pow *= 2;
            pow_str = to_string(two_pow);
        }
        
        return false;
    }
};