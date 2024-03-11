
function Fibonacci(No : number) : void
{
    let pre : number = 0;
    let post : number = 1;
    let Sum : number = 1;

    while(Sum <= No)
    {
        console.log(Sum);
        Sum = pre + post;
        pre = post;
        post = Sum;
    }
}

Fibonacci(21);