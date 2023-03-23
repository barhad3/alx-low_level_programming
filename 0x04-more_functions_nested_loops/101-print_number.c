void print_number(int n) {
    int digits = 1;

    // Handle negative numbers
    if (n < 0) {
        _putchar('-');
        n = -n;
    }

    // Count the number of digits in the number
    int temp = n;
    while (temp / 10 != 0) {
        digits++;
        temp /= 10;
    }

    // Print each digit in reverse order
    for (int i = digits; i > 0; i--) {
        _putchar((n / (int)pow(10, i-1)) % 10 + '0');
    }
}
