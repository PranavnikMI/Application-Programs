import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';

import { AppComponent } from './app.component';
import { MarvellousComponent } from './marvellous/marvellous.component';
import { InfosystemsComponent } from './infosystems/infosystems.component';

@NgModule({
  declarations: [
    AppComponent,
    MarvellousComponent,
    InfosystemsComponent
  ],
  imports: [
    BrowserModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
