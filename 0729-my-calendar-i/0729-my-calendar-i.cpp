class MyCalendar {
public:
    MyCalendar() {
        
    }
    
    vector<pair<int,int>>v;
    
    bool book(int start, int end) {
        
        for(auto x:v){
            if(max(start,x.first)<min(end,x.second)){
                return false;
            }
        }
        
        v.push_back({start,end});
        return true;
        
    }
};

/**
 * Your MyCalendar object will be instantiated and called as such:
 * MyCalendar* obj = new MyCalendar();
 * bool param_1 = obj->book(start,end);
 */