-- Given a table of random numbers as follows:

-- ** numbers table schema **

-- id
-- number1
-- number2
-- number3
-- number4
-- number5
-- Your job is to return a table in the following format, where each value is the number of bytes in the string representation of the number.

-- ** output table schema **

-- octnum1
-- octnum2
-- octnum3
-- octnum4
-- octnum5
-- See expected results for more clarity if required.

-- my solution

/*  SQl  */
SELECT 
  LENGTH(CAST(number1 as TEXT)) as octnum1,
  LENGTH(CAST(number2 as TEXT)) as octnum2,
  LENGTH(CAST(number3 as TEXT)) as octnum3,
  LENGTH(CAST(number4 as TEXT)) as octnum4,
  LENGTH(CAST(number5 as TEXT)) as octnum5
FROM numbers;
