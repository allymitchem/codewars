// DESCRIPTION:
// Write function bmi that calculates body mass index (bmi = weight / height2).

// if bmi <= 18.5 return "Underweight"

// if bmi <= 25.0 return "Normal"

// if bmi <= 30.0 return "Overweight"

// if bmi > 30 return "Obese"

// My solution
std::string bmi(double w, double h) 
{
  float bmi = w / (h*h);
//     std::cout << bmi << "\n";
  if (bmi <= 18.5){
    return "Underweight";
  } else if (bmi <= 25.0){
    return "Normal";
  } else if (bmi <= 30.0){
    return "Overweight";
  } else {
    return "Obese";
  }
  } 

//   other solutions
std::string bmi(double w, double h) 
{
  double bmi = w / h / h;
  if(bmi <= 18.5) return "Underweight";
  if(bmi <= 25.0) return "Normal";
  if(bmi <= 30.0) return "Overweight";
  return "Obese";
}
