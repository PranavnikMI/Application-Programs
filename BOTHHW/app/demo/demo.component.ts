import { Component, EventEmitter, Input, Output } from '@angular/core';

@Component({
  selector: 'app-demo',
  templateUrl: './demo.component.html',
  styleUrls: ['./demo.component.css']
})
export class DemoComponent 
{
  @Input() public MSGR = "";
  @Output() public Myevent = new EventEmitter();

  public SendMSG()
  {
    this.Myevent.emit("Message send from child to parent");
  }
}
