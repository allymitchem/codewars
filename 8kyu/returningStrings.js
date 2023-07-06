// DESCRIPTION:
// Write a select statement that takes name from person table and return "Hello, <name> how are you doing today?" results in a column named greeting

// [Make sure you type the exact thing I wrote or the program may not execute properly]

// my solution
SELECT CONCAT('Hello, ', name,' how are you doing today?' ) as greeting FROM person

// other solutions
--person table has name data
select format('Hello, %s how are you doing today?', name) as greeting
from person

// -------
--person table has name data
-- Very nice job in description... i'm kidding
-- table name: person
-- column name: name
select 'Hello, ' || name || ' how are you doing today?' as greeting from person