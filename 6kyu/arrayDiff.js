// DESCRIPTION:
// Your goal in this kata is to implement a difference function, which subtracts one list from another and returns the result.

// It should remove all values from list a, which are present in list b keeping their order.

// arrayDiff([1,2],[1]) == [2]
// If a value is present in b, all of its occurrences must be removed from the other:

// arrayDiff([1,2,2,2,3],[2]) == [1,3]

// my solution
function arrayDiff(a, b) {

    let returnArr = []
    
    if (a.length === 0){
      return []
    }
   
    for (let i = 0 ; i < a.length; i++){
      if (b.indexOf(a[i])=== -1){
          returnArr.push(a[i])
    
          }
      }
     
   for (let i = 0; i < b.length; i++){
     if (a.indexOf(b[i])===-1){
       returnArr.push(b[i])
     
   }
   
    
    }  return returnArr
     }
      
     
    //  other solutions
    function array_diff(a, b) {
        return a.filter(e => !b.includes(e));
      }
    //   ---

    function array_diff(a, b) {

        var arr = new Array();
        
        for(var i = 0;i<a.length;i++){
            if(b.indexOf(a[i])<0){
                arr.push(a[i]);
            }
        }
      
        return arr;
    }