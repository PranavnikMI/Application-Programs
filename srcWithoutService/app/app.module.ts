import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';

import { AppComponent } from './app.component';
import { BatchesListComponent } from './batches-list/batches-list.component';
import { BatchDetailsComponent } from './batch-details/batch-details.component';

@NgModule({
  declarations: [
    AppComponent,
    BatchesListComponent,
    BatchDetailsComponent
  ],
  imports: [
    BrowserModule
  ],
  providers: [],
  bootstrap: [AppComponent]
})
export class AppModule { }
