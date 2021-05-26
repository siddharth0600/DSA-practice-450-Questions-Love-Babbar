class Solution {
public:
    string longestPalindrome(string s) {
        int n= s.length();
        int start=0,end=1;
        int l,h;
        for(int i=1;i<n;i++){
            l=i-1;
            h=i;
            while(l>=0 && h<n){
                if(s[l]==s[h]){
                    if(end<h-l+1){
                        end=h-l+1;
                        start=l;
                    }
                        
                } else 
                    break;
                l--;
                h++;
            }
            
            
            l=i-1;
            h=i+1;
            while(l>=0 && h<n){
                if(s[l]==s[h]){
                    if(end<h-l+1){
                        end=h-l+1;
                        start=l;
                    }
                        
                } else 
                    break;
                l--;
                h++;
            }
        }
        return s.substr(start,end);
        
        
    }
};