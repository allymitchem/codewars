// You are given a table named repositories, format as below:

// ** repositories table schema **

// project
// commits
// contributors
// address
// The table shows project names of major cryptocurrencies, their numbers of commits and contributors and also a random donation address ( not linked in any way :) ).

// For each row: Return first x characters of the project name where x = commits. Return last y characters of each address where y = contributors.

// Return project and address columns only, as follows:

// ** output table schema **

// project
// address
// Case should be maintained.


// my solution
/*  SQL  */

-- x characters of project (x = commits)
-- y LAST characters of address ( y = contributors)


SELECT 
  LEFT(project, commits) AS project,
  RIGHT(address, contributors) AS address
FROM repositories;

// other solutions
select left(project, commits) as project, right(address, contributors) as address from repositories