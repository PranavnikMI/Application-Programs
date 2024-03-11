import { Directive, ElementRef, HostListener} from '@angular/core';

@Directive({
  selector: '[appDemo]'
})
export class DemoDirective 
{

  constructor(public eobj : ElementRef) 
  {}

  @HostListener('mouseenter')onmouseneter()
  {
    this.eobj.nativeElement.style.background = 'blue';
  }

  @HostListener('mouseleave')onmouseleave()
  {
    this.eobj.nativeElement.style.background = 'red';
  }
}
