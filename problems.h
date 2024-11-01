int floorFunction(double number) {
    int integerPart = number;
    return (number >= integerPart) ? integerPart : integerPart - 1;
}

int ceilingFunction(double number) {
    int integerPart = number;
    return (number == integerPart || number < 0) ? integerPart : integerPart + 1;
}

void swap_values(int &a, int &b) {
    a = a + b;
    b = a - b;
    a = a - b;
}

int multiply(int x, int y) {
    if (y==1) {
        return x;
    }
    --y;
    return x+ multiply(x,y);
}

int digitSum(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + digitSum(n / 10);
}

int decimalToBinary(int n) {
    if (n == 0) {
        return 0;
    }
    decimalToBinary(n / 2);
    return  (n % 2)+10* decimalToBinary(n/2);
}

template <typename T>
T midValue(T a, T b, T c) {
    if ((a > b && a < c) || (a < b && a > c)) {
        return a;
    } else if ((b > a && b < c) || (b < a && b > c)) {
        return b;
    } else {
        return c;
    }
}