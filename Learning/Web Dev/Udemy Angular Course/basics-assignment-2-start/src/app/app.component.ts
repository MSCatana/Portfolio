import { Component, OnInit, OnChanges } from '@angular/core';

@Component({
  selector: 'app-root',
  templateUrl: './app.component.html',
  styleUrls: ['./app.component.css']
})
export class AppComponent implements OnInit{
  username: string = "";
  isDisabled: boolean = true;

  ngOnInit(){

  }

  ngOnChanges(): void{
    if (this.username !== "") {
      this.isDisabled = false;
    }
  }

  onClick(){
    this.username = '';
    this.isDisabled = true;
  } 
}