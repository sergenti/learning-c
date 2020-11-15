// Complete the method that takes a boolean value and return a "Yes" string for true, or a "No" string for false.

const char *bool_to_word(int value)
{
    return value ? "Yes" : "No";
}

const char *bool_to_word(int value)
{
    return (value == 0) ? "No" : "Yes";
}

const char *bool_to_word(int value)
{
    if (value == 1)
        return "Yes";
    else
        return "No";
}