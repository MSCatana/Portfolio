import { getLocaleDateTimeFormat } from '@angular/common';
import { Component } from '@angular/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
})
export class AppComponent {
  isDisplayed = false;
  counter: number = 0;
  log: any = [0];

  displayParagraph() {
    if(this.isDisplayed === false) {
      this.isDisplayed = true;
    } else {
      this.isDisplayed = false;
    }
    this.counter++;
    console.log(this.counter);
    this.log.push(this.counter);
    console.log(this.log);
  }

  getColor() {
    if (this.counter >= 5) {
      return 'blue'
    }
  }
}
