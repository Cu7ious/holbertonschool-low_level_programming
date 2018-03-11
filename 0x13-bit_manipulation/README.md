# 0x13. C - Bit manipulation

### base2 = 2^n, where n - inedex of the position (from 0, right to left)
```
0b101 = (1 * 2^2) + (0 * 2^1) + (1 * 2^0) = 5
0b101100 = (32) + (0) + (8) + (4) + (0) + (0) = 44
```

### base8 -> 8^n
```
0o254 = (2 * 8^2) + (5 * 8^1) + (4 * 8^0) = 128 + 40 + 4 = 172
0o102 = (1 * 8^2) + (0) + (2 * 8^0) = 64 + 0 + 2 = 66
```

### base16 -> 16^n
```
0x4F5 = (4 * 16^2) + (15 * 16^1) + (5 * 16^0) = 1024 + 256 + 5 = 1269
0x89  = (8 * 16^1) + (9 * 16^0) = + 128 + 9 = 137
```

### How to translate 0x to 0b
1. Translate every digit to its binary representation with 4 positions
2. Pad digits with leading zeros
```
0x4F5 = 100 + 1111 + 101 = 0100 1111 0101
0x89 =  1000 1001
```

### How to translate 0b to 0o
1. Split the binary number to a sequence of 3, e.g. `010 011 110 101`
2. Multiply each position to 2^n, where n is an index number of the position
```
0x4F5 = 010 011 110 101 =
	((0*2^2)+(1*2^1)+(0*2^0)) // 2
	((0*2^2)+(1*2^1)+(1*2^0)) // 3
	((1*2^2)+(1*2^1)+(0*2^0)) // 6
	((1*2^2)+(0*2^1)+(1*2^0)) // 5
= 0o2365
```

## Readings
	(habrahabr)[//habrahabr.ru/post/124395/]

## Project Summary

```
0-binary_to_uint.c		// converts a binary number to an unsigned int
2-get_bit.c			// returns the value of a bit at a given index
3-set_bit.c			// sets the value of a bit to 1 at a given index
4-clear_bit.c			// sets the value of a bit to 0 at a given index
5-main.c			// returns the number of bits you would need to flip to get from one number to another
```
