import { Pipe, PipeTransform } from '@angular/core';

@Pipe({
  name: 'marvellousPipe'
})
export class MarvellousPipePipe implements PipeTransform {

  transform(value: any, ...args): any 
  {
    let str = value;

    if(args[0] == "Marvellous")
    {
      str += "Educating for better tomorrow" 
    }
    return str;
  }

}
