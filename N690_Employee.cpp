// https://leetcode.com/problems/employee-importance/
/*
// Employee info
class Employee {
public:
    // It's the unique ID of each node.
    // unique id of this employee
    int id;
    // the importance value of this employee
    int importance;
    // the id of direct subordinates
    vector<int> subordinates;
};
*/
class Solution {
public:
    int getImportance(vector<Employee*> employees, int id) {
        int res=0;
        for(const auto& employ:employees)
        {
            if(employ->id==id)
            {
                for(const auto& sub_id:employ->subordinates)
                {
                    res+=getImportance(employees,sub_id);
                }
                res+=employ->importance;
            }
            
        }
        return res;
    }
};
