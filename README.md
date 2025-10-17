# print-primes-1-to-100
 This beginner-friendly C program prints all prime numbers from 1 to 100 using loops and conditionals. It helps reinforce control flow, logical reasoning, and GitHub workflow. The code is clean and readable, ideal for learners exploring how prime number detection works step by step.
The following is the pseudo code of the above:
START

FOR each number from 2 to 100 DO
    SET isPrime to true

    FOR each i from 2 to number - 1 DO
        IF number MOD i == 0 THEN
            SET isPrime to false
            BREAK inner loop
        END IF
    END FOR

    IF isPrime is true THEN
        PRINT number
    END IF
END FOR

END
