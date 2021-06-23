import { Component, OnInit, EventEmitter, Output } from '@angular/core';
import { Recipe } from '../recipe.model';

@Component({
  selector: 'app-recipe-list',
  templateUrl: './recipe-list.component.html',
  styleUrls: ['./recipe-list.component.css']
})
export class RecipeListComponent implements OnInit {
  @Output() recipeWasSelected = new EventEmitter<Recipe>();

  recipes: Recipe[] = [
    new Recipe('A Test Recipe', 'This is simple a test', 'https://cookieandkate.com/images/2018/03/simple-marinara-sauce-recipe-4-550x824.jpg'),
    new Recipe('Another Test Recipe', 'This is simple a test', 'https://cookieandkate.com/images/2018/03/simple-marinara-sauce-recipe-4-550x824.jpg')

  ];

  constructor() { }

  ngOnInit(): void {
  }

  onRecipeSelected(recipe: Recipe) {
    this.recipeWasSelected.emit(recipe);
  }

}
