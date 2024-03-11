import { Component } from '@angular/core';

@Component({
  selector: 'app-demo',
  templateUrl: './demo.component.html',
  styleUrls: ['./demo.component.css']
})
export class DemoComponent 
{
  public name = "Marvellous infosystems";
  public today = new Date();
  public value = 32.8989978;
  public Institute = {
    "name" : "Marvellous",
    "location" : "pune"
  }
}
