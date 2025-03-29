// we have to solve this question in constant space and time complexity
// this solution use O(1) TC and 1 extra space 
// stack<pair<int,int>>s;
//     MinStack() {
        
//     }
    
//     void push(int val) {
//         if(s.empty()){
//             s.push({val,val});
//         }else{
//             int minVal=min(val,s.top().second);
//             s.push({val,minVal});
//         }
//     }
    
//     void pop() {
//         s.pop();
//     }
    
//     int top() {
//         return s.top().first;
//     }
    
//     int getMin() {
//         return s.top().second;
        
//     }


// this code take constant space and time complexity
// no extra space used
stack<long long int>s;
    long long minVal;
    MinStack() {
        
    }
    
    void push(int val) {
        if(s.empty()){
            s.push(val);
            minVal=val;
        }else{
            if(val<minVal){
                s.push((long long)2*val - minVal);
                minVal=val;
            }else{
                s.push(val);
            }
        }
    }
    
    void pop() {
        if(s.top()<minVal){
            minVal=2*minVal - s.top();
        }
        s.pop();
    }
    
    int top() {
        if(s.top()<minVal){
            return minVal;
        }

        return s.top();
    }
    
    int getMin() {
        return minVal;
    }