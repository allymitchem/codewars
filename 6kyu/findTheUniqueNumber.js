// There is an array with some numbers. All numbers are equal except for one. Try to find it!

// findUniq([ 1, 1, 1, 2, 1, 1 ]) === 2
// findUniq([ 0, 0, 0.55, 0, 0 ]) === 0.55
// It’s guaranteed that array contains at least 3 numbers.

// The tests contain some very huge arrays, so think about performance.

// my solution
function findUniq(arr) {

    let num1 = arr[0]
    let num2 = arr[1]
  
    for (let i = 2; i < arr.length; i++){
      if (num1 == num2){
        if (arr[i] != num1){
          return arr[i]
        } 
      } else {
        if( arr[i] == num1){
          return num2
        } else return num1
      }
    }
  }

//   other solutions
function findUniq(arr) {
    arr.sort((a,b)=>a-b);
    return arr[0]==arr[1]?arr.pop():arr[0]
  }