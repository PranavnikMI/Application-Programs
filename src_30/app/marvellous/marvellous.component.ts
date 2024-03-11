import { Component, OnInit } from '@angular/core';

@Component({
  selector: 'app-marvellous',
  templateUrl: './marvellous.component.html',
  styleUrls: ['./marvellous.component.css']
})
export class MarvellousComponent
{
  public Technology = "Node.js"

  fun()
  {
    return "Learn "+ this.Technology;
  }
}
