class Solution {
public:
    double r, x, y;
    Solution(double radius, double x_center, double y_center) {
        r = radius;
        x = x_center;
        y = y_center;
    }
    
    vector<double> randPoint() {
        double n_x, n_y;
        
        do {
            n_x = (2 * ((double)rand()/RAND_MAX) - 1.0) * r;
            n_y = (2 * ((double)rand()/RAND_MAX) - 1.0) * r;
        } while(pow(n_x, 2) + pow(n_y, 2) > pow(r, 2));
        
        
        return {n_x + x, n_y + y};
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(radius, x_center, y_center);
 * vector<double> param_1 = obj->randPoint();
 */