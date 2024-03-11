import { Component ,OnInit} from '@angular/core';
import { NumberService } from '../number.service';

@Component({
  selector: 'app-child1',
  templateUrl: './child1.component.html',
  styleUrls: ['./child1.component.css']
})
export class Child1Component implements OnInit
{
  public Flag = false;

  constructor(public obj : NumberService)
  {

  }

  ngOnInit()
  {
   this.Flag = this.obj.ChkPrime(17);    
  }

}
