// DESCRIPTION:
// Given a string, you have to return a string in which each character (case-sensitive) is repeated once.

// Examples (Input -> Output):
// * "String"      -> "SSttrriinngg"
// * "Hello World" -> "HHeelllloo  WWoorrlldd"
// * "1234!_ "     -> "11223344!!__  "
// Good Luck!

// my solution
function doubleChar(str) {
    // Your code here
   
    let result = ""
    for (i = 0; i < str.length; i++){
     result += str[i] + str[i]
    }
    return result
  }

//   other solutions
const doubleChar = (str) => str.split("").map(c => c + c).join("");

