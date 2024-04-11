
# Day-002-Temperature-converter

## Project Description

Welcome to Day 2 of the "100 Days, 100 C Projects" challenge! Today, we're creating a temperature converter program in C that converts temperatures between Celsius and Fahrenheit and vice versa. This project aims to strengthen your understanding of basic arithmetic operations and functions in C.

## Coding Problem

Write a C program that performs the following tasks:
1. Accepts user input for a temperature value.
2. Allows the user to choose between Celsius and Fahrenheit units.
3. Converts the input temperature to the selected unit.
4. Displays the converted temperature to the user.

## Challenges

- Implement error handling to deal with invalid input from the user (e.g., non-numeric input, out-of-range choices).
- Optimize the conversion functions for accuracy and efficiency.
- Enhance the user interface with better prompts and messages.

## Rules

1. Use the provided `temp.h` header file for function prototypes.
2. Ensure that the temperature conversion formulas are correct:
   - Celsius to Fahrenheit: \( \text{F} = \frac{9}{5} \times \text{C} + 32 \)
   - Fahrenheit to Celsius: \( \text{C} = \frac{\text{F} - 32}{1.8} \)
3. Implement the `userInput`, `choice`, `celsiusToFahrenheit`, and `fahrenheitToCelsius` functions as described in the provided code snippet.
4. Handle all potential errors and edge cases gracefully, providing meaningful error messages when necessary.
5. Compile and run the program using GCC commands (`gcc -o temp_converter temp_converter.c` and `./temp_converter`).
6. Document your code clearly with comments to explain the logic and functionality of each part.

## Getting Started

1. Clone this repository to your local machine.
2. Navigate to the project directory containing the `temp_converter.c` and `temp.h` files.
3. Compile the program using GCC: `gcc -o temp_converter temp_converter.c`.
4. Run the executable: `./temp_converter`.
5. Follow the prompts to input a temperature value and choose the unit for conversion.

## Example Usage

```
$ ./temp_converter
        ***Temperature converter (Celsius to Fahrenheit and vice versa)***
Enter data: 32
You have Entered: 32.000000
Choose the unit:
1. Celsius
2. Fahrenheit
1
You chose Celsius.
Temperature in Fahrenheit: 89.600000
```

## Acknowledgments

This project is inspired by the "100 Days, 100 C Projects" challenge and aims to enhance your skills in C programming, arithmetic operations, and user input handling.

Happy coding and enjoy exploring the world of temperature conversions in C!

---

Feel free to customize this README.md file further or add more specific instructions based on your preferences or requirements.