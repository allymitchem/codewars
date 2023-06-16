// DESCRIPTION:
// Write a function that returns a string in which firstname is swapped with last name.

// Example(Input --> Output)

// "john McClane" --> "McClane john"

// my solution
function nameShuffler(str){
    //   refactored
      return str.split(" ").reverse().join(" ")
      
      
    //   original-----
    //   const arr = str.split(" ")
    //   let newArr = []
    //   for (let i = 0; i < arr.length ; i++){
    //     newArr.push(arr[i])
    //   }
    //     const reverse = newArr.reverse()
    //     const newStr = reverse.join(" ")
    //      return newStr
      
    }
   
 // other solutions
 function nameSuffle(str){
    var arr = str.split(" ");
    return arr[1] + ' ' + arr[0]
  }
    