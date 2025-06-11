(function () {
'use strict';

angular.module('lunchCheck', [])
.controller('LunchCheckController', LunchCheckController);

LunchCheckController.$inject = ['$scope'];

function LunchCheckController($scope) {

$scope.dishes = "";
$scope.message = "";

$scope.dishChecker = function () {
	$scope.dishes = $scope.dishes.split(',');
	if (($scope.dishes).length >= 4) {
		$scope.message = "Too Much!"
	} else if ($scope.dishes == "") {
		$scope.message = "Empty!"
	} else {
		$scope.message = "Enjoy!"
	}
}


}

})();