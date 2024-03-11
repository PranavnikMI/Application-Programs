import { NgModule } from '@angular/core';
import { BrowserModule } from '@angular/platform-browser';

import { AppComponent } from './app.component';
import { BatchlistComponent } from './batchlist/batchlist.component';
import { BatchdetailsComponent } from './batchdetails/batchdetails.component';
import { MarvellousService } from './marvellous.service';


@NgModule({
  declarations: [
    AppComponent,
    BatchlistComponent,
    BatchdetailsComponent
  ],
  imports: [
    BrowserModule
  ],
  providers: [MarvellousService],
  bootstrap: [AppComponent]
})
export class AppModule { }
