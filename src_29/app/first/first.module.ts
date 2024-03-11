import { NgModule } from '@angular/core';
import { CommonModule } from '@angular/common';
import { DemoComponent } from './demo/demo.component';
import { HelloComponent } from './hello/hello.component';

@NgModule({
  declarations: [DemoComponent, HelloComponent],
  imports: [
    CommonModule
  ],
  exports:[
    DemoComponent
  ]
})
export class FirstModule { }
