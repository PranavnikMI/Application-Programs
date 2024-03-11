import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';

import { AppRoutingModule } from './app-routing.module';
import { AppComponent } from './app.component';
import { DemoDirective } from './demo.directive';
import { NgbModule } from '@ng-bootstrap/ng-bootstrap';

import { NgbCarouselModule } from '@ng-bootstrap/ng-bootstrap';
import { NgIf } from '@angular/common';
import { BrowserAnimationsModule } from '@angular/platform-browser/animations';

import { MatSlideToggleModule } from '@angular/material/slide-toggle';

@NgModule({
  declarations: [
    AppComponent,
    DemoDirective
  ],
  imports: [
    BrowserModule,
    AppRoutingModule,
    NgbModule,
    NgIf,NgbCarouselModule, BrowserAnimationsModule,
    MatSlideToggleModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
