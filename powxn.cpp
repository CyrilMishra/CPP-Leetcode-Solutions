class Solution {
public:
    double myPow(double x, long n) {
        if(x==1)
            return 1;
        if(n==0)
            return 1;
        if(n<0){
            if((n*-1)%2==0){
                double ans=myPow(x,n/2);
                return ans*ans;
            }else{
                return (1/x)*myPow(x,n+1);
            }
        }
        if(n%2==0){
            double ans=myPow(x,n/2);
            return ans*ans;
        }
        return x*myPow(x,n-1);
    }
};
