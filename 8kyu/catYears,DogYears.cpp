// Kata Task
// I have a cat and a dog.

// I got them at the same time as kitten/puppy. That was humanYears years ago.

// Return their respective ages now as [humanYears,catYears,dogYears]

// NOTES:

// humanYears >= 1
// humanYears are whole numbers only
// Cat Years
// 15 cat years for first year
// +9 cat years for second year
// +4 cat years for each year after that
// Dog Years
// 15 dog years for first year
// +9 dog years for second year
// +5 dog years for each year after that
// References

// http://www.catster.com/cats-101/calculate-cat-age-in-cat-years
// http://www.slate.com/articles/news_and_politics/explainer/2009/05/a_dogs_life.html

// my solution
#include <vector>

std::vector<int> humanYearsCatYearsDogYears(int humanYears) {
  int catYears = 0;
  int dogYears = 0;
    
    if (humanYears  == 1){
      catYears = 15;
      dogYears = 15;
    } else if (humanYears == 2) {
      catYears = 24;
      dogYears = 24;
    } else if (humanYears > 2){
      catYears = 24 + (4 * (humanYears-2));
      dogYears = 24 + (5 * (humanYears-2));
    }
  return {humanYears, catYears, dogYears};
}

// other solutions

int convertDogYears(int &humanYears){
  if(humanYears == 1) return 15;
  if(humanYears == 2) return 24;
  if(humanYears > 2) return 24 + (humanYears - 2)*5;
}

std::vector<int> humanYearsCatYearsDogYears(int humanYears) {
  int catYears = convertCatYears(humanYears);
  int dogYears = convertDogYears(humanYears);
  
  return {humanYears, catYears, dogYears};
}

// ------
#include <vector>

std::vector<int> humanYearsCatYearsDogYears(int humanYears) {
  //your code here
  if (humanYears==1)
  return {1,15,15};
  if (humanYears==2)
  return {2,24,24};
  return {humanYears,24+(humanYears-2)*4,24+(humanYears-2)*5};
}