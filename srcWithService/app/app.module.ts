import { BrowserModule } from '@angular/platform-browser';
import { NgModule } from '@angular/core';

import { AppComponent } from './app.component';
import { BatchesListComponent } from './batches-list/batches-list.component';
import { BatchDetailsComponent } from './batch-details/batch-details.component';
import { BatchService } from './batch.service'; // Import the required service

@NgModule({
  declarations: [
    AppComponent,
    BatchesListComponent,
    BatchDetailsComponent
  ],
  imports: [
    BrowserModule
  ],
  providers: [BatchService],  // Register name of our service
  bootstrap: [AppComponent]
})
export class AppModule { }

/*
  Service - It is class with specific purpose.
  We can use service to share data between components
  and to implement application logic, External interaction 
  like database connections. 
*/
