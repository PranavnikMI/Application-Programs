import { Component } from '@angular/core';

@Component({
  selector: 'app-demo',
  templateUrl: './demo.component.html',
  styleUrls: ['./demo.component.css']
})
export class DemoComponent
{
  public batch = "Angular";
  public Fees = 18500;

  DisplayDetails() : string
  {
    return "This is web development batch"
  } 
}
