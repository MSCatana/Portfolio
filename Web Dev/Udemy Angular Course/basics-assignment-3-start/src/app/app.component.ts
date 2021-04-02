import { Component } from '@angular/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent {
  buttonClicked = false;
  logs = [];

  onButtonClick() {
    this.buttonClicked = true;
    // this.logs.push(this.logs.length + 1);
    this.log.push(new Date());
    }
}
