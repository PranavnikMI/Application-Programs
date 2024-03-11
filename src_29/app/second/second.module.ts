import { NgModule } from '@angular/core';
import { CommonModule } from '@angular/common';
import { MarvellousComponent } from './marvellous/marvellous.component';
import { InfosystemsComponent } from './infosystems/infosystems.component';

@NgModule({
  declarations: [MarvellousComponent, InfosystemsComponent],
  imports: [
    CommonModule
  ],
  exports:[
    InfosystemsComponent
  ]
})
export class SecondModule { }
