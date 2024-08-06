class Solution {
public:
    int maxDepth(string s) {
        int n=s.size();
        int cnt=0;
        int maxi=0;
        for(int i=0;i<n;i++)
        {
            if(s[i]=='(')
            {
            cnt++;
             maxi=max(maxi,cnt);
            }

            else if(s[i]==')')
            cnt--;
            

            
        }
        return maxi;

        
    }
};