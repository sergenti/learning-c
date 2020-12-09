<div align="center">

# Difference between BREAK & CONTINUE

</div>
 
The major difference between break and continue statements in C language is that a break causes the innermost enclosing loop or switch to be exited immediately.
Whereas, the continue statement causes the next iteration of the enclosing for, while, or do loop to begin. The continue statement in while and do loops takes the control to the loop's test-condition immediately, whereas in the for loop it takes the control to the increment step of the loop.

**The continue statement applies only to loops, not to switch.**
A continue inside a switch inside a loop causes the next loop iteration. **(default)**

Practically, break is used in switch, when we want to exit after a particular case is executed; and in loops, when it becomes desirable to leave the loop as soon as a certain condition occurs (for instance, you detect an error condition, or you reach the end of your data prematurely).

**The continue statement is used when we want to skip one or more statements in loop's body and to transfer the control to the next iteration.**

A break can appear in both switch and loop (for, while, do) statements.

A continue can appear only in loop (for, while, do) statements.

A break causes the switch or loop statements to terminate the moment it is executed. Loop or switch ends abruptly when break is encountered.

A continue doesn't terminate the loop, it causes the loop to go to the next iteration. All iterations of the loop are executed even if continue is encountered. The continue statement is used to skip statements in the loop that appear after the continue.

The break statement can be used in both switch and loop statements.

The continue statement can appear only in loops. You will get an error if this appears in switch statement.

When a break statement is encountered, it terminates the block and gets the control out of the switch or loop.

When a continue statement is encountered, it gets the control to the next iteration of the loop.

A break causes the innermost enclosing loop or switch to be exited immediately.

A continue inside a loop nested within a switch causes the next loop iteration.

##Similarities Between break and continue
Both break and continue statements in C programming language have been provided to alter the normal flow of program.

Example using break
The following function, trim, removes trailing blanks, tabs and newlines from the end of a string, using a break to exit from a loop when the rightmost non-blank, non-tab, non-newline is found.

```C
/_ trim: remove trailing blanks, tabs, newlines _/
int trim(char s[])
{
int n;
for (n = strlen(s)-1; n >= 0; n--)
if (s[n] != ' ' && s[n] != '\t' && s[n] != '\n')
break;
s[n+1] = '\0';
return n;
}
```

strlen returns the length of the string. The for loop starts at the end and scans backwards looking for the first character that is not a blank or tab or newline. The loop is broken when one is found, or when n becomes negative (that is, when the entire string has been scanned).

Example using continue
As an example, the following piece of code sums up the non-negative elements in the array a; negative values are skipped.

```C
/_ sum up non-negative elements of an array _/

#include <stdio.h>

int main()
{
int a[10] = {-1, 2, -3, 4, -5, 6, -7, 8, -9, 10};
int i, sum = 0;
for (i = 0; i < 10; i++)
{
if (a[i] < 0) /_ skip negative elements _/
continue;
sum += a[i]; /_ sum positive elements _/
}
printf("Sum of positive elements: %d\n", sum);
}
```

**OUTPUT**

Sum of positive elements: 30
Hope you have enjoyed reading differences and similarities between break and continue. Please do write us if you have any suggestion/comment or come across any error on this page. Thanks for reading!
