var value = 2568,
    sum = 0;

while (value) {
    sum += value % 10;
    value = value / 10;
}

console.log(sum);