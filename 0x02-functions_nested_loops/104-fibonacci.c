def fibonacci_sequence(n):
    a, b = 1, 2
    sequence = [a, b]

    for _ in range(n - 2):
        a, b = b, a + b
        sequence.append(b)

    return sequence

def print_fibonacci_numbers():
    n = 98
    sequence = fibonacci_sequence(n)
    print(", ".join(str(num) for num in sequence))

print_fibonacci_numbers()
