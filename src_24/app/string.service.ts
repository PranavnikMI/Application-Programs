import { Injectable } from '@angular/core';

@Injectable({
  providedIn: 'root'
})
export class StringService 
{
  public CountCapital(a : string)
  {
    let i : number = 0;
    let Count : number = 0;

    for(i = 0; i < a.length ; i++)
    {
      if(a.charAt(i) >= 'A' && a.charAt(i) <= 'Z')
      {
        Count++;
      }
    }

    return Count;
  }
}
