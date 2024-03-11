import { Component, EventEmitter, Output } from '@angular/core';

@Component({
  selector: 'app-demo',
  templateUrl: './demo.component.html',
  styleUrls: ['./demo.component.css']
})
export class DemoComponent 
{
  @Output() public Myevent = new EventEmitter();

  public SendMessage()
  {
    this.Myevent.emit("Hello Parent Component");
  }

}
