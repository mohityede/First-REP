 // class for the function of solution.
 class Solution {
  public:
    vector<int> quadraticRoots(int a, int b, int c) {
        // code here
        vector<int> v;
        
       if((b*b)>(4*a*c)){
           //v.assign(2,0);
           int root=pow((pow(b,2)-4*a*c),1/2);
            int ans1=((-1*b)+(root))/(2*a);
            int ans2=((-1*b)-(root))/(2*a);
            v[0]=ans1;
            v[1]=ans2;
            return v;
            
            
       }
       else if((b*b)<(4*a*c)){
           v.assign(1,-1);
           return v;
       }
       else{
           //v.assign(2,0);
           int ans2=(-1*b)/(2*a);
            v.assign(2,ans2);
            return v;
       }
        
    }
};
