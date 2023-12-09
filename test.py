def generate_password(number, name):
    try:
        # Convert number to scientific notation
        scientific_notation = "{:.1e}".format(float(number))

        # Simplify the digits after the decimal point
        simplified_exponent = sum(int(digit) for digit in str(scientific_notation.split('e')[1]))

        # Create S1 by concatenating the first three letters of each digit
        s1 = ''.join([word[:3] for word in str(scientific_notation) if word.isalpha() or word == 'e'])

        # Create S2 by concatenating letters at odd positions in the name
        s2 = ''.join([name[i-1] for i in range(1, len(name)+1, 2)])

        # Combine S1 and S2 with '@' symbol
        password = f"{s1}@{s2}"

        return password
    except ValueError:
        # Invalid number
        return "Invalid input"

# Input
T = int(input("Enter the number of test cases: "))
for _ in range(T):
    number, name = input().split()
    result = generate_password(number, name)
    print(result)
