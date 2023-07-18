// Write function RemoveExclamationMarks which removes all exclamation marks from a given string.

// my solution
function removeExclamationMarks(s) {
    return s.replace(/!/g, '')
  }

//   other solutions
function removeExclamationMarks(s) {
    return s.split('!').join('');
  }