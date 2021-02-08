class Solution {
public:
    vector<int> shortestToChar(string s, char c) 
    {
        int n = s.length();
        vector<int> pos;
        vector<int> ans;
        for (int i = 0; i < n; i++)
        {
            if(s[i]==c){pos.push_back(i);}
        }
        int min = 10000;
        for(int i = 0; i < n; i++)
        {
            for(int j = 0; j < pos.size(); j++)
            {
                if(abs(i-pos[j])<min) min = abs(i-pos[j]);
            }
            
            ans.push_back(min);
            min = 10000;
        }
        return ans;
    }
};
