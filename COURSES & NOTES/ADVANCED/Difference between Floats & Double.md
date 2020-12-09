<div align="center">

# Difference between FLOAT & DOUBLE

</div>

As we know that in **C/C++** we require float and double data type for the representation of Floating point numbers i.e the numbers which have decimal part with them.
Now on the basis of precision provided by both of these data types we can differentiate between both of them.

In simple words it could be state that **double has 2x more precision as compare than float** which means that double data type has double precision than as compare to that of float data type.

</br>

<div align="center">

In terms of number of precision:

</div>
</br>

`double has 64 bit precision for floating point number` (1 bit for the sign, 11 bits for the exponent, and 52\* bits for the value)
**i.e.double has 15 decimal digits of precision.**

`float has 32 bit precision for floating number` (8 bits for the exponent, and 23\* for the value)
**i.e. float has 7 decimal digits of precision.**

**As double has more precision as compare to that of float then it is much obvious that it occupies twice memory as occupies by the float data type.**

Also range of both the data types could be represented as ±3.40282347E+38F i.e. 6-7 significant digits for float and ±1.79769313486231570E+308 i.e. 15-16 significant digits for double.

On the basis on above points we can state that in case high precision is not required and the program only needs a huge array of decimal numbers to be stored float is a cost-effective way of storing data and saves memory while when more precision is required go for double.
