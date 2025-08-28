# Credit (Week 1) $  

## Project Description  
A program in C that prompts the user for a credit card number, checks if it's valid, and reports whether it is an American Express, MasterCard, or Visa card number.  
It also uses the Luhn’s Algorithm to determine if the number is valid, reporting invalid if it doesn't pass.  

### Luhn’s Algorithm  
The algorithm per se makes this verification:  
1. Multiply every other digit by 2, starting with the second-to-last digit, and then add those products’ digits together.  
2. Add this sum to the sum of the digits that weren’t multiplied by 2.  
3. If the total’s last digit is 0, the number is valid.  

### Card structure  
For this exercise only the basic structure of the cards will be used, thinking of them syntactically. Those are the rules each card type is expected to follow:  

#### American Express (AMEX)  
- Starts with 34 or 37.  
- Uses 15 digits.  

#### MasterCard  
- Starts with 51, 52, 53, 54, or 55.  
- Uses 16 digits.  

#### Visa  
- Starts with 4.  
- Uses 13 and 16 digits.  

## How to Run ▷  
```bash
compile ⤵  
clang -o credit credit.c -lcs50  

run ⤵  
./credit
