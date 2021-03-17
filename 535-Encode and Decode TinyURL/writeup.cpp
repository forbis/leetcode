class Solution {
public:
    vector<string> storage;
    int id = 0;
    string char_table = "0123456789abcdefghigklmnopqrstuvwxyzABCDEFGHIGKLMNOPQRSTUVWXYZ";
    
    // Encodes a URL to a shortened URL.
    string encode(string longUrl) {
        id++;
        int tmp = id;
        string enc("http://tinyurl.com/");
        while(tmp) {
            enc += char_table[tmp % 62];
            tmp /= 62;
        }
        
        storage.push_back(longUrl);
        
        return enc;
    }

    // Decodes a shortened URL to its original URL.
    string decode(string shortUrl) {
        int index = 0;
        string tmp(shortUrl.rbegin(), shortUrl.rend());
        for(int i = 0; i < tmp.find("/"); i++) {
            index = index + (pow(62, i) * char_table.find(tmp[i]));
        }
        
        return storage[index - 1];
    }
};

// Your Solution object will be instantiated and called as such:
// Solution solution;
// solution.decode(solution.encode(url));