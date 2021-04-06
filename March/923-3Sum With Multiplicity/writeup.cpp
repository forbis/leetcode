class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        sort(arr.begin(), arr.end());
        set<tuple<int, int, int>> occur;
        long long ans = 0;
        for(int i = 0; i < arr.size() - 1; i++) {
            for(int j = i + 1; j < arr.size(); j++) {
                int a = arr[i];
                int b = arr[j];
                int c = target - (a + b);
                if(a <= b && b <= c) {
                    tuple<int, int, int> t(a, b, c);
                    if(occur.count(t)) { continue; }
                    occur.insert(t);
                    if((a == b) && (a == c)) {
                        ans += ((count(arr.begin(), arr.end(), a) - 2) * (count(arr.begin(), arr.end(), b) - 1) * count(arr.begin(), arr.end(), c)) / 6;
                    }

                    else if((a == b) || (b == c)) {
                        ans += (count(arr.begin(), arr.end(), a) * (count(arr.begin(), arr.end(), b) - 1) * count(arr.begin(), arr.end(), c)) / 2;
                    }

                    else {
                        ans += (count(arr.begin(), arr.end(), a) * count(arr.begin(), arr.end(), b) * count(arr.begin(), arr.end(), c));
                    }
                }
            }
        }
        
        
        return ans % (int)(1e9+7);
    }
};