import { Pipe, PipeTransform } from '@angular/core';

@Pipe({
  name: 'marvellous'
})
export class MarvellousPipe implements PipeTransform {

  transform(value: unknown, ...args: unknown[]): unknown 
  {
    let str = value;

    if(args[0] == "PPA")
    {
      str = str + " covers the programming foundation"
    }
    else if(args[0] == "LB")
    {
      str = str + " covers the progamming logics";
    }
    else if(args[0] == "Angular")
    {
      str = str + " covers the progamming in Web Devlopment";
    }

    return str;
  }

}
