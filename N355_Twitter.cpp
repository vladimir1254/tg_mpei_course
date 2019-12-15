// https://leetcode.com/problems/design-twitter/
class Twitter {
public:
    /** Initialize your data structure here. */
    Twitter() {
        
    }
    
    /** Compose a new tweet. */
    void postTweet(int userId, int tweetId) {
        users[userId].push_back({time++,tweetId});
    }
    
    /** Retrieve the 10 most recent tweet ids in the user's news feed. Each item in the news feed must be posted by users who the user followed or by the user herself. Tweets must be ordered from most recent to least recent. */
    vector<int> getNewsFeed(int userId) {
        priority_queue<pair<int,int>> q;
        vector<pair<int,int>> userTweet = users[userId];// твиты самого пользователя
        for(int i = userTweet.size()-1,c =0;i>=0 && c<10;c++,i--)
        {
            q.push(userTweet[i]);
        }
        set<int> fol=follower[userId];// берем на кого подписан
        for(auto folow:fol)
        {
            vector<pair<int,int>>foll = users[folow];
        for(int i = foll.size()-1, c=0;i>=0 && c<10;i--,c++)
        {
                q.push(foll[i]);
        }
        }
        vector<int> res;
        for(int i=0;i<10 && !q.empty();i++)
        {
            res.push_back(q.top().second);
            q.pop();
        }
        return res;
    }
    
    /** Follower follows a followee. If the operation is invalid, it should be a no-op. */
    void follow(int followerId, int followeeId) {
        if(followerId!=followeeId)
        {
            follower[followerId].insert(followeeId);
        }
    }
    
    /** Follower unfollows a followee. If the operation is invalid, it should be a no-op. */
    void unfollow(int followerId, int followeeId) {
        follower[followerId].erase(followeeId);
    }
    private:
    map<int,set<int>> follower; // подписки человека.
    map<int,vector<pair<int,int>>> users;  // храним твиты.
    int time = 1; // если 1 твит несколько раз.
};
