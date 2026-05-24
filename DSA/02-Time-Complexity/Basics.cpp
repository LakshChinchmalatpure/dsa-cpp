//Q] what is time complexity?
//Time complexity is very important in coding interviews because interviewers want to check how efficient your solution is, not only whether it works.
//Time complexity tells us:
//“How much the running time of a program increases when input size increases.”
//It is usually written using Big O notation.
//Example:
/*
O(1) → constant time (fastest)
O(log n) → very efficient
O(n) → linear
O(n log n) → good for sorting
O(n²) → slow for large input

In interviews, many students can write working code.

But companies also check:

Can you optimize the solution?
Can you handle large data?
Do you know DSA concepts?

If array size = 10 lakh
O(n) may run fast
O(n²) may become too slow

So interviewer prefers efficient solution.


//According to Interview View
O(1)--Excellent
O(log n)---Very good
O(n)---Good
O(n log n)--Acceptable
O(n²)---Sometimes acceptable
O(2^n)---Usually bad


Real Interview Importance

For companies like:

Google
Amazon
Microsoft

DSA rounds heavily focus like:
Google etc

Time complexity
Space complexity
Optimization

Simple Interview Rule
First make code work.
Then reduce time complexity.
Then reduce space complexity.

TC--calculate worst case scenario
avoid constants
avoid lower values

for (int i = 0; i < n; i++)
{
    for (int i = 0; i < n; i++){
        // code
    }
    
}
//o(n) --- notation


for (int i = 0; i < n; i++)
{
    for (int i = 0; i < j; i++){
        // code
    }
    
}
//o(n^2) --- notation


*/
