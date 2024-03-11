import { NgModule } from '@angular/core';
import { Routes, RouterModule } from '@angular/router';
import { BatchesComponent } from './batches/batches.component';
import { componentFactoryName } from '@angular/compiler';
import { SubjectsComponent } from './subjects/subjects.component';
import { InvalidPageComponent } from './invalid-page/invalid-page.component';
import { AppComponent } from './app.component';

//Array of Routes in application
const routes: Routes = [
  {path : 'batches', component:BatchesComponent},
  {path : 'subjects' ,component:SubjectsComponent},
  //Add on default path
  { path: '', component:BatchesComponent},
  // It is our Widcard component
  {path : '**', component:InvalidPageComponent}
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
