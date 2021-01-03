<div align="center">

# ANSI Colors - COLOR CODES

</div>

We have 8 ANSI colors that we can use in our output, this can be doubled to 16 if you take into consideration that these colors can be displayed as standard or in bold for highlighting.

To be able to access the colors we need to use and escape sequence followed by the correct color code, the print the text and finally reset the colors.

It is important to reset the color to ensuring that the selected color is terminated and text returns to normal.

```c
printf(“\033[0;31m”); //set the text color red
printf(“Hello\n”); // display Hello in red
printf(“\033[0m”); // resets the text to default color
```

<div align="center">

**Escape is:** `\033`

**Color code is:** `[0;31m`

**Reset code is:** `[0m `

Using the following table you can view some of the code available.

|  Code   |    Color     |
| :-----: | :----------: |
| [0;31m  |     Red      |
| [1;31m  |   Bold Red   |
| [0;32m  |    Green     |
| [1;32m  |  Bold Green  |
| [0;33m  |    Yellow    |
| [01;33m | Bold Yellow  |
| [0;34m  |     Blue     |
| [1;34m  |  Bold Blue   |
| [0;35m  |   Magenta    |
| [1;35m  | Bold Magenta |
| [0;36m  |     Cyan     |
| [1;36m  |  Bold Cyan   |
|   [0m   |    Reset     |

</div>
