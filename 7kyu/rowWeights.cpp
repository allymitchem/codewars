// Scenario
// Several people are standing in a row divided into two teams.
// The first person goes into team 1, the second goes into team 2, the third goes into team 1, and so on.

// Task
// Given an array of positive integers (the weights of the people), return a new array/tuple of two integers, where the first one is the total weight of team 1, and the second one is the total weight of team 2.

// Notes
// Array size is at least 1.
// All numbers will be positive.
// Input >> Output Examples
// rowWeights([13, 27, 49])  ==>  return (62, 27)

#include <vector>
#include <utility>

using namespace std; 

pair<int,int> rowWeights (const vector <int> &weights)
{
  int team1Weight = 0;
  int team2Weight = 0;
  
  for (int i = 0; i < weights.size(); i++){
    if (i % 2 == 0){
      team1Weight += weights[i];
    } else team2Weight += weights[i];
  }
  return std::make_pair(team1Weight, team2Weight);
}