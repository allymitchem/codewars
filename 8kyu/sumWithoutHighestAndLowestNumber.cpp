// Task
// Sum all the numbers of a given array ( cq. list ), except the highest and the lowest element ( by value, not by index! ).

// The highest or lowest element respectively is a single element at each edge, even if there are more than one with the same value.

// Mind the input validation.

// Example
// { 6, 2, 1, 8, 10 } => 16
// { 1, 1, 11, 2, 3 } => 6
// Input validation
// If an empty value ( null, None, Nothing etc. ) is given instead of an array, or the given array is an empty list or a list with only 1 element, return 0.

// my solution
#include<vector>
using namespace std;

int sum(vector<int> numbers)
{
  
  if (numbers.empty() || numbers.size() <= 1){
    return 0;
  }
  
  
// sort numbers highest to lowest
  std::sort (numbers.begin(), numbers.end());
  
  
//   removing first & last
  numbers.erase(numbers.begin());
  numbers.pop_back();
  
  
  int total = 0;
  for (int num :numbers){
    total += num;
  }
    return total;
    
}

// other solutions
#include <vector>
using namespace std;

int sum(vector<int> numbers)
{
    if (numbers.size() < 2) return 0;
    int sum = 0;
    int low = numbers[0], high = numbers[0];
    for (int n : numbers) {
      if (n < low) low = n;
      else if (n > high) high = n;
      sum += n;
    }
    return sum - high - low;
}