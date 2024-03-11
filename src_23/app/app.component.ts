import { Component } from '@angular/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent 
{
  public str = "";
  public gun = ""

  public Send(a : any)
  {
    this.gun = "Welcome "+a;
  }
}
