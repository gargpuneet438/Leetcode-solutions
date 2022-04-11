class Solution {
public:
    int largestInteger(int num) {
        priority_queue<int>p;
        priority_queue<int>q;
        string s=to_string(num);
        int n=s.size();
        int i,j;
        for(i=0;i<n;i++){
            int a=s[i]-'0';
            if(a%2==0)
                p.push(a);
            else
                q.push(a);
        }int ans=0;
        for(i=0;i<n;i++){
            ans*=10;
            int a=s[i]-'0';
            if(a%2==0)
            ans+=p.top(),p.pop();
            else
            {
                ans+=q.top();
                q.pop();
            }
        }return ans;
    }
};
