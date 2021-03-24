struct Record {
    int id;
    string startStation;
    string endStation;
    int startTime;
    int endTime;
};

class UndergroundSystem {
public:
    vector<Record> records;
    UndergroundSystem() {
        
    }
    
    void checkIn(int id, string stationName, int t) {
        Record new_rec = {id, stationName, "", t, 0};
        records.push_back(new_rec);
    }
    
    void checkOut(int id, string stationName, int t) {
        for(Record& rec:records) {
            if(rec.id == id && rec.endStation == "") { 
                rec.endStation = stationName; 
                rec.endTime = t;
            }
        }
    }
    
    double getAverageTime(string startStation, string endStation) {
        int cnt = 0;
        int time = 0;
        int o_c = 0;
        int o_t = 0;
        for(Record& rec:records) {
            if((rec.startStation == startStation) && (rec.endStation == endStation)) { 
                cnt ++;
                time += (rec.endTime - rec.startTime);
            }
        }
        

        return (double) time / cnt;
    }
};

/**
 * Your UndergroundSystem object will be instantiated and called as such:
 * UndergroundSystem* obj = new UndergroundSystem();
 * obj->checkIn(id,stationName,t);
 * obj->checkOut(id,stationName,t);
 * double param_3 = obj->getAverageTime(startStation,endStation);
 */