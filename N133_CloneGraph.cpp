/* https://leetcode.com/problems/clone-graph/
// Definition for a Node.
class Node {
public:
    int val;
    vector<Node*> neighbors;

    Node() {}

    Node(int _val, vector<Node*> _neighbors) {
        val = _val;
        neighbors = _neighbors;
    }
};
*/
class Solution {
public:
    Node* cloneGraph(Node* node) {
      
            if(node ==NULL )
                return NULL;
      queue<Node*>que;
        que.push(node);
        Node* p = new Node(node->val,{});
        copy[node]=p;
        while(!que.empty())
        {
            Node* s = que.front();
            que.pop();
            for(Node* neighbor:s->neighbors)//берем всех соседей данной вершины 
            {
                if(copy.find(neighbor)==copy.end()) // если их ещё нету в мапе
                {
                copy[neighbor]=new Node(neighbor->val,{});//добавляем со значением.
                que.push(neighbor);
                 }
                copy[s]->neighbors.push_back(copy[neighbor]);
                //
            }
            
        }
    
    
        return copy[node];
    }
    private: map<Node*, Node*> copy; // храним копию графа.
};
