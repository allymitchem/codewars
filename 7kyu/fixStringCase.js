// In this Kata, you will be given a string that may have mixed uppercase and lowercase letters and your task is to convert that string to either lowercase only or uppercase only based on:

// make as few changes as possible.
// if the string contains equal number of uppercase and lowercase letters, convert the string to lowercase.
// For example:

// solve("coDe") = "code". Lowercase characters > uppercase. Change only the "D" to lowercase.
// solve("CODe") = "CODE". Uppercase characters > lowecase. Change only the "e" to uppercase.
// solve("coDE") = "code". Upper == lowercase. Change all to lowercase.
// More examples in test cases. Good luck!


function solve(s){
    //   if uppercase num === to lowercase num, => string lowercase
    //   lowercase > uppercase => change D to lowercase
    //   uppercase > lowercase => change e to uppercase
      let upperCaseNum = 0
      let lowerCaseNum = 0
      for(let i = 0; i < s.length; i++){
        if (s[i]===s[i].toUpperCase()){
          upperCaseNum++
        } else lowerCaseNum++
      } 
      if (upperCaseNum > lowerCaseNum){
        return s.toUpperCase()
      } else return s.toLowerCase()
    }
