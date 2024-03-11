import { Component } from '@angular/core';

@Component({
  selector: 'app-marvellous-template',
  templateUrl: './marvellous-template.component.html',
  styleUrls: ['./marvellous-template.component.css']
})
export class MarvellousTemplateComponent 
{
  // Event listener for button
  public AcceptData(value : any)
  {
    console.log(value);
  }
}
