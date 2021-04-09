// Flaws
// repetitive  - redundant code 
// memory intensive - resutl repeatedly expands 
class Solution {
public:
    vector<string> fizzBuzz(int n) {
         vector<string> result (0);

          for(int i = 1; i <= n; i++)
          {
            if (i % 5 == 0 && i % 3 == 0 )
              result.push_back("FizzBuzz");
            else if(i % 5 == 0)
              result.push_back("Buzz");
            else if(i % 3 == 0)
              result.push_back("Fizz");
            else
              result.push_back(std::to_string(i));
          }

          return result;
    }
};


