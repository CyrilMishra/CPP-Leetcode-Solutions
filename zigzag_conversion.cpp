class Solution {
public:
    string convert(string s, int num) {
        vector<vector<char>> rep (num, vector<char> (1000, ' '));
        if(num == 1) return s;
        int j = 0, k = 0;
        bool stop = false;
        string res;
        for(int i=0; i<s.size();)
        {
            if(j % (num-1) == 0)
            {
                k = 0;
                while(k < num)
                {
                    rep[k][j] = s[i];
                    i++;
                    k++;
                    if(i == s.size()) stop = true;
                    if(stop == true) break;
                }
                if(stop == true) break;
                j++;
            }
            else
            {
                k = j % (num-1);
                rep[num-1-k][j] = s[i];
                i++;
                j++;
                if(i == s.size()) break;
            }
        }
        
        for(int i=0; i<rep.size(); i++)
        {
            for(int j=0; j<rep[i].size(); j++)
            {
                if(rep[i][j] != ' ' && (int)(rep[i][j]) != 0) res.push_back(rep[i][j]);
            }
        }
        
        return res;
    }
};
