// Deoxyribonucleic acid (DNA) is a chemical found in the nucleus of cells and carries the "instructions" for the development and functioning of living organisms.

// If you want to know more: http://en.wikipedia.org/wiki/DNA

// In DNA strings, symbols "A" and "T" are complements of each other, as "C" and "G". Your function receives one side of the DNA (string, except for Haskell); you need to return the other complementary side. DNA strand is never empty or there is no DNA at all (again, except for Haskell).

// More similar exercise are found here: http://rosalind.info/problems/list-view/ (source)

// Example: (input --> output)

// "ATTGC" --> "TAACG"
// "GTAT" --> "CATA"

// my solution
#include <string>

std::string DNAStrand(const std::string& dna)
{
  std::string compl_dna;
 for ( std::string::size_type i = 0; i < dna.length(); i++){
   
   if (dna[i] == 'A'){
     compl_dna += 'T';
   } else if (dna[i] == 'T'){
     compl_dna += 'A';
   } else if (dna[i] == 'C'){
     compl_dna += 'G';
   } else if (dna[i] == 'G'){
     compl_dna += 'C';
   }
 } return compl_dna;
}

// other solutions

td::string DNAStrand(std::string dna)
{
  for(int i=0;i<dna.length();i++) {
    switch (dna[i]) {
    case 'A': dna[i]='T'; break;
    case 'T': dna[i]='A'; break;
    case 'C': dna[i]='G'; break;
    case 'G': dna[i]='C'; break;
    }
  }
  return dna;
}