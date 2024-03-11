import { Component } from '@angular/core';

@Component({
  selector: 'app-style',
  templateUrl: './style.component.html',
  styleUrls: ['./style.component.css']
})
export class StyleComponent 
{
  public Mycolor = "orange"
  public Isset = true;
  public myclass = "success";
  public Data = "___";

  public MyAction()
  {
    this.Data = "Submit button clicked..."
  }

  public MyActionNew(value : any)
  {
     console.log(value);
  }
}
