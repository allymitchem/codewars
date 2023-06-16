// DESCRIPTION:
// A pangram is a sentence that contains every single letter of the alphabet at least once. For example, the sentence "The quick brown fox jumps over the lazy dog" is a pangram, because it uses the letters A-Z at least once (case is irrelevant).

// Given a string, detect whether or not it is a pangram. Return True if it is, False if not. Ignore numbers and punctuation.


// my solution
function isPangram(string){

    let arr = string.toLowerCase()
    let alpha = 'abcdefghijklmnopqrstuvwxyz'.split('')
  
    
    for (let i = 0; i < alpha.length; i++){
      if (arr.indexOf(alpha[i]) < 0){
        return false
      }
    } return true
  }

//   other solutions
function isPangram(string){
    string = string.toLowerCase();
    return "abcdefghijklmnopqrstuvwxyz".split("").every(function(x){
      return string.indexOf(x) !== -1;
    });
  }
// -----

  function isPangram(string){
    return (string.match(/([a-z])(?!.*\1)/ig) || []).length === 26;
  }
//   ----
function isPangram(string) {
    const alphabetList = [...'abcdefghijklmnopqrstuvwxyz'];
  
    return alphabetList.every((letter) => string.toLowerCase().includes(letter));
  }