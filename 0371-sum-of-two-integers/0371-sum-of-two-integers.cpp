class Solution {
public:
    int getSum(int a, int b) {
      return log2(std::pow(2, a) * std::pow(2, b));
        //return log(exp(a))+log(exp(b));
    }
};