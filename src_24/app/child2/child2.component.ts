import { Component, OnInit } from '@angular/core';
import { StringService } from '../string.service';

@Component({
  selector: 'app-child2',
  templateUrl: './child2.component.html',
  styleUrls: ['./child2.component.css']
})
export class Child2Component implements OnInit
{
  public Ans = 0;

  constructor(public obj : StringService)
  {

  }

  ngOnInit()
  {
      this.Ans = this.obj.CountCapital("ShiPA");
  }

}
