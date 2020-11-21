// ANSI Colors

// We have 8 ANSI colors that we can use in our output, this can be doubled to 16 if you take into consideration that these colors can be displayed as standard or in bold for highlighting. To be able to access the colors we need to use and escape sequence followed by the correct color code, the print the text and finally reset the colors.

// printf(“\033[0;31m”); //Set the text to the color red
// printf(“Hello\n”); //Display Hello in red
// printf(“\033[0m”); //Resets the text to default color

// Escape is: \033
// Color code is: [0;31m
// It is important to reset the color to ensuring that the selected color is terminated and text returns to normal. Using the following table you can view some of the code available.

// CODE            	COLOR

// [0;31m          	Red
// [1;31m          	Bold Red
// [0;32m          	Green
// [1;32m          	Bold Green
// [0;33m          	Yellow
// [01;33m         	Bold Yellow
// [0;34m          	Blue
// [1;34m          	Bold Blue
// [0;35m          	Magenta
// [1;35m          	Bold Magenta
// [0;36m          	Cyan
// [1;36m          	Bold Cyan
// [0m             	Reset