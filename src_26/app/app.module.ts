import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';

import { AppComponent } from './app.component';
import { MarvellousStyleComponent } from './marvellous-style/marvellous-style.component';

@NgModule({
  declarations: [
    AppComponent,
    MarvellousStyleComponent
  ],
  imports: [
    BrowserModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
