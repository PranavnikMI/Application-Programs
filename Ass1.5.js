function Fibonacci(No) {
    var pre = 0;
    var post = 1;
    var Sum = 1;
    while (Sum <= No) {
        console.log(Sum);
        Sum = pre + post;
        pre = post;
        post = Sum;
    }
}
Fibonacci(21);
