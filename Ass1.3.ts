
function DisplayFactor(No : number) : void
{
    var Cnt : number = 0;

    console.log("Factor of "+No+" is : ");

    while(Cnt <= No/2)
    {
        if(No % Cnt == 0)
        {
            console.log(Cnt);
        }
        Cnt++;
    }
} 

DisplayFactor(20);