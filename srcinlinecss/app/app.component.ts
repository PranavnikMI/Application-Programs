import { Component } from '@angular/core';

@Component({
  selector: 'app-root',
  template: `<h1>Marvellous Infosystems</h1>
  <h3>Pre-Placement Activity</h3>
  <h3>Logic Building</h3>
  <h3>Web Development</h3>
  <h3>Industrial Project Development</h3>`,
  styles: [`
  h3{
    color: blue
  }
  h1{
    color: red
  }
  `]
})
export class AppComponent {
  title = 'app';
}
