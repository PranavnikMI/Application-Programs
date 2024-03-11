import { Component ,OnInit} from '@angular/core';
import { NumberService } from './number.service';
import { StringService } from './string.service';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent implements OnInit
{
  public Ans : number = 0;
  public Flag : boolean = false;

  constructor(public obj1 : NumberService , public obj2 : StringService)
  {

  }

  ngOnInit()
  {
    this.Flag = this.obj1.ChkPrime(11);
    this.Ans = this.obj2.CountCapital("PRAnAV");
  }
}
