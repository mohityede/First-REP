class Solution {
  public:
    long long int nthOfSeries(long long int n){
        // code here
        long long r=((n*n)*8)+1;
        return r;
    }
};
