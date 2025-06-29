class Solution {
public:
    string D2B (int n){
       string answer = "";
        while (n != 0){
            answer =  std::to_string(n%2) + answer;
            n= n/2;
            
    }
       return answer;
    };
    string baseNeg2(int n) {
        int i = 0 , j = 0 ;
        if (n == 0){
            return "0";
        }
        while (i <= n){
            i = (1<<(2*j))+i;
            ++j;
        }
        if (n%2 == 0){
            i = i - 1;
        }
        i = i ^ (i-n);
        return D2B(i);
    }
}; 