class Solution {
public:
    int reverse(int x) {
        int rev= 0;
        int max = INT_MAX/10;
        while ( x != 0 ){
          if(abs(rev)>max){
            return 0;
          }
          rev= rev*10;
          rev= rev +(x%10);
          x= x/10;
        }
        return rev;
    }
};