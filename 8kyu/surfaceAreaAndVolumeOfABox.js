// Write a function that returns the total surface area and volume of a box as an array: [area, volume]

function getSize(width, height, depth){s
    return [(2*(depth*width))+(2* (width*height))+(2*(depth*height)), width*height*depth]
  }