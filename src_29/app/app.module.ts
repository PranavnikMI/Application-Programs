import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';
import {FirstModule} from './first/first.module';
import {SecondModule} from './second/second.module';
import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';

@NgModule({
  declarations: [
    AppComponent
  ],
  imports: [
    FirstModule,
    SecondModule,
    BrowserModule,
    AppRoutingModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
