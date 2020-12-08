
/*

Operator	Description                                                                                                         	        Example

&	        Binary AND Operator copies a bit to the result if it exists in both operands.	                                                (A & B) = 12, i.e., 0000 1100

|	        Binary OR Operator copies a bit if it exists in either operand.	                                                                (A | B) = 61, i.e., 0011 1101

^	        Binary XOR Operator copies the bit if it is set in one operand but not both.	                                                (A ^ B) = 49, i.e., 0011 0001

~	        Binary One's Complement Operator is unary and has the effect of 'flipping' bits.	                                            (~A ) = ~(60), i.e,. 1100 0011

<<	        Binary Left Shift Operator. The left operands value is moved left by the number of bits specified by the right operand.	        A << 2 = 240 i.e., 1111 0000

>>	        Binary Right Shift Operator. The left operands value is moved right by the number of bits specified by the right operand.	    A >> 2 = 15 i.e., 0000 1111

*/

// EXAMPLE

int main()
{
    int val = 10;

    // val * 2
    val = val << 1; // 10(d) = 1010(b) applying LEFT SHIFT BY 1 10100(b) = 16+4 = 20(d)

    // val / 4
    val = val >> 2; //  20(d) = 10100(b) applying RIGHT SHIFT BY 2 101(b) = 1+4 = 5(d)

    // applying AND to every bit
    val = val & 4; // 0101 && 0100 = 0100 (1 if both are 1)

    val = val | 7; // 0100 | 1111 = 1111 (1 if at lest one is 1)
}