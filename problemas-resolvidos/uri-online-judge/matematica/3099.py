def count1sinRangeAtDigit(number, d):  
  
    powerOf10 = int(pow(10, d));  
    nextPowerOf10 = powerOf10 * 10;  
    right = number % powerOf10;  
  
    roundDown = number - number % nextPowerOf10;  
    roundup = roundDown + nextPowerOf10;  
  
    digit = (number // powerOf10) % 10;  
  
    # if the digit in spot digit is
    if (digit < 1):  
        return roundDown // 10;  
  
    if (digit == 1):
        return roundDown // 10 + right + 1;  
  
    return roundup // 10;  
  
# Counts the number of '1' digits 
# between 0 and n  
def numberOf1sinRange(number): 
      
    # Convert integer to String  
    # to find its length  
    s = str(number);  
    len1 = len(s);  
  
    # Traverse every digit and  
    # count for every digit  
    count = 0;  
    for digit in range(len1):
        count += count1sinRangeAtDigit(number, digit);  
  
    return count;  


def count7sinRangeAtDigit(number, d):  
  
    powerOf10 = int(pow(10, d));  
    nextPowerOf10 = powerOf10 * 10;  
    right = number % powerOf10;  
  
    roundDown = number - number % nextPowerOf10;  
    roundup = roundDown + nextPowerOf10;  
  
    digit = (number // powerOf10) % 10;  
  
    # if the digit in spot digit is
    if (digit < 7):  
        return roundDown // 10;  
  
    if (digit == 7):
        return roundDown // 10 + right + 1;  
  
    return roundup // 10;  
  
# Counts the number of '7' digits 
# between 0 and n  
def numberOf7sinRange(number): 
      
    # Convert integer to String  
    # to find its length  
    s = str(number);  
    len1 = len(s);  
  
    # Traverse every digit and  
    # count for every digit  
    count = 0;  
    for digit in range(len1):
        count += count7sinRangeAtDigit(number, digit);  
  
    return count;  
  
# Driver Code
while True:
    try:
        n = int(input())
        print(numberOf1sinRange(n) + numberOf7sinRange(n))
    except EOFError:
        break