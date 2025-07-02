class Solution {
public:
    vector<string> result;
    vector<string> generateParenthesis(int n) {
        gp(0,0,"",n);
        return result;
    }
    void gp(int lc,int rc,string temp ,int n){
        if (temp.size()==2*n){
            result.push_back(temp);
            return;
        }
        if(lc>rc){
            if(lc==n){
                gp(lc,rc+1,temp+")",n);
            }
            
            else{
                gp(lc+1,rc,temp+"(",n);
                gp(lc,rc+1,temp+")",n);
            }
            
        }
        else if(lc==rc){
                gp(lc+1,rc,temp+"(",n);
            }
    }
};