& is bitwise and and && is logical and.

The expression x && y will return 1 if both x and y is non-zero, and 0 otherwise. Note that if x is zero, then y will not be evaluated at all.

The expression x & y will perform a bitwise operation on each individual bit in x and y. So if x is 1010 in binary and y is 1100 then x & y will evaluate to 1000. Note that the return value of x & y should NOT be interpreted as a Boolean value.

One way to explain it is that you could imagine that & is the same thing as applying && on each individual bit in the operands.

Also note that & has lower precedence than &&, even though intuition says that it should be the other way around. This also goes for comparison operators, like <, <=, ==, !=, >=, >. This goes back to the time when C did not have the operators && and || and the bitwise versions was used instead. At this time, it made sense, but when the logical operators were added, it did not anymore. Kernighan and Ritchie admitted that it would have made more sense, but they did not fix it because this would break existing code.

I'm not sure why this would return true in one scenario and false in another.

The return value from x & y should not be treated as a Boolean value at all. However, it can (depending on how the code is written) be treated as a Boolean array. If you have two integers, flags1 and flags2 then the result of flags1 & flags2 will denote which flags that are toggled in both flags1 and flags2.