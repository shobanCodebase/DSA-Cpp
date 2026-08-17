class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxHeap(stones.begin(), stones.end());
        
        while (maxHeap.size() > 1) {
            
            int y = maxHeap.top(); 
            maxHeap.pop();
            int x = maxHeap.top(); 
            maxHeap.pop();
            
            int remainder = y - x;
            
            if (remainder > 0) {
                maxHeap.push(remainder);
            }
        }
        
        return maxHeap.empty() ? 0 : maxHeap.top();
    }
};