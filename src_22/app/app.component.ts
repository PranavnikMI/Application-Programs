import { Component } from '@angular/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent 
{
  public str = ""

  public fun() : string
  {
    return"Marvellous Infosystems";
  }

  public SendMSG() : void
  {
    this.str = "Educating For Better Tomorrow";
  }

  public Display (value : any)
  {
    console.log(value);
  }
}
