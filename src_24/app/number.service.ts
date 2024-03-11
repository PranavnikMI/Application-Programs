import { Injectable } from '@angular/core';

@Injectable({
  providedIn: 'root'
})
export class NumberService 
{
  public ChkPrime(a : number) 
  {
    let flag : boolean = true;
    let i : number = 0;

    for(i = 2; i <= a/2; i++)
    {
      if(a % i == 0)
      {
        flag = false;
      }
    }

    return flag;
  }
}
