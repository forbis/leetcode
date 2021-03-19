class Solution {
public:
    void traversal(vector<vector<int>>& rooms, vector<bool>& check, int key) {
        if(check[key] == true) { return; }
        check[key] = true;
        for(int i = 0; i < rooms[key].size(); i++) {
            traversal(rooms, check, rooms[key][i]);
        }
    }
    
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> check_rooms(rooms.size(), false);
        traversal(rooms, check_rooms, 0);
    
        for(bool flag:check_rooms) {
            if(!flag) { return false; }
        }
        
        return true;
    }
};