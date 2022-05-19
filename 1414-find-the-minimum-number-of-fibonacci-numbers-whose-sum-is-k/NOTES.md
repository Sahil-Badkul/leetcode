int findMinFibonacciNumbers(int k) {
if (k < 2) return k;
int a = 1, b = 1;
while (b <= k) {
swap(a, b);
b += a;
}
return 1 + findMinFibonacciNumbers(k - a);
}