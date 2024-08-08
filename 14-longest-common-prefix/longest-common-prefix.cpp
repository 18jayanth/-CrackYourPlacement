class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s="";
        int n=strs.size();
        sort(strs.begin(),strs.end());
        string left=strs[0];
        string right=strs[n-1];
        for(int i=0;i<left.size();i++)
        {
            if(left[i]==right[i])
            {
                s+=left[i];
            }
            else
            break;

        }
        return s;

        
    }
};