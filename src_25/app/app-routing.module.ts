import { NgModule } from '@angular/core';
import { RouterModule, Routes } from '@angular/router';
import { DemoComponent } from './demo/demo.component';
import { HelloComponent } from './hello/hello.component';
import { WrongComponent } from './wrong/wrong.component';

const routes: Routes = [
 {path : 'first', component : DemoComponent},
 {path : 'second', component : HelloComponent},
 {path : '', component : DemoComponent},
 {path : '**', component : WrongComponent}
];

@NgModule({
  imports: [RouterModule.forRoot(routes)],
  exports: [RouterModule]
})
export class AppRoutingModule { }
