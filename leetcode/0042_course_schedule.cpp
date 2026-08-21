class Solution {
public:
    bool canFinish(int numCourses, vector<vector<int>>& prerequisites) {
        vector<vector<int>> graph(numCourses);
        for (auto& pre : prerequisites) {
            int course = pre[0];
            int prereq = pre[1];
            graph[course].push_back(prereq);
        }
        
        vector<int> state(numCourses, 0);
        

        for (int course = 0; course < numCourses; course++) {
            if (state[course] == 0) {
                if (hasCycle(course, graph, state)) {
                    return false;  
                }
            }
        }
        
        return true;  
    }
    
private:
    bool hasCycle(int course, vector<vector<int>>& graph, vector<int>& state) {
        state[course] = 1;
        
        for (int prereq : graph[course]) {
            if (state[prereq] == 1) {
                
                return true;
            }
            if (state[prereq] == 0) {
                
                if (hasCycle(prereq, graph, state)) {
                    return true;
                }
            }
          
        }
        
       
        state[course] = 2;
        
        return false;
    }
};