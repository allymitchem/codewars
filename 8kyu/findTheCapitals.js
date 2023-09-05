// Instructions
// Write a function that takes a single string (word) as argument. The function must return an ordered list containing the indexes of all capital letters in the string.

// Example (Input --> Output)
// "CodEWaRs" --> [0,3,4,6]

var capitals = function (word) {
	let capitals = []
  for (let i = 0; i < word.length; i++){
    if (word[i] == word[i].toUpperCase()){
      capitals.push(i)
    }
  }
  return capitals
};