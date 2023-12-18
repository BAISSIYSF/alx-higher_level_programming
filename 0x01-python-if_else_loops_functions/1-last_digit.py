#!/usr/bin/python3
import random
number = random.randint(-10000, 10000)
integer = abs(number) % 10
if number < 0:
    integer = -integer
print(f"Last digit of {number} is {integer} and is ", end="")
if integer > 5:
    print("greater than 5")
elif integer == 0:
    print("0")
else:
    print("less than 6 and not 0")
