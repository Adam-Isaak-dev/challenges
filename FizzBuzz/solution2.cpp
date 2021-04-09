// Improvements
// less repetitive code - easier to read 
// less memory intensive -  result does not need to expand
class Solution {
public:
    vector<string> fizzBuzz(int n) {
         vector<string> result (n);

          for(int i = 1; i <= n; i++)
          {
            if (i % 3 == 0)
              result.operator[](i - 1).append("Fizz");
            
            if(i % 5 == 0)
              result.operator[](i - 1).append("Buzz");
              
            if( i % 5 != 0 && i % 3 != 0)
                result.operator[](i - 1).append(std::to_string(i));
          }

          return result;
    }
};