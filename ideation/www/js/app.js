// Ionic Starter App

// angular.module is a global place for creating, registering and retrieving Angular modules
// 'starter' is the name of this angular module example (also set in a <body> attribute in index.html)
// the 2nd parameter is an array of 'requires'
// 'starter.services' is found in services.js
// 'starter.controllers' is found in controllers.js
//var app = angular.module('starter', ['ionic']);
var app = angular.module('starter', ['ionic', 'starter.controllers', 'starter.services'])

app.run(function($ionicPlatform, $state, $rootScope) {
    $ionicPlatform.ready(function() {
        // Hide the accessory bar by default (remove this to show the accessory bar above the keyboard
        // for form inputs)
        if (window.cordova && window.cordova.plugins && window.cordova.plugins.Keyboard) {
            cordova.plugins.Keyboard.hideKeyboardAccessoryBar(true);
        }
        if (window.StatusBar) {
            // org.apache.cordova.statusbar required
            StatusBar.styleLightContent();
        }
    });
    console.log(window.localStorage);
    $rootScope.$on('$stateChangeStart',
        function() {
            //console.log(window.localStorage);
            if (window.localStorage['name'] != 'user' && window.localStorage['pwd'] != 'secret') {
                // $state.go('login');
            }
        });

})




app.config(function($stateProvider, $urlRouterProvider) {
    $urlRouterProvider.otherwise('/landing')

    $stateProvider.state('home', {
        url: '/home',
        views: {
            menuContent: {
                templateUrl: 'templates/home.html'
            }
        }
    })
    $stateProvider.state('landing', {
        url: '/landing',
        views: {
            menuContent: {
                templateUrl: 'templates/landing.html'
            }
        }
    })
    $stateProvider.state('login', {
        url: '/login',
        views: {
            menuContent: {
                templateUrl: 'templates/login.html',
                controller: 'LoginCtrl'
            }
        }
    })
    $stateProvider.state('about', {
        url: '/about',
        views: {
            menuContent: {
                templateUrl: 'templates/about.html'
            }
        }
    })
    $stateProvider.state('favourites', {
        url: '/favourites',
        views: {
            menuContent: {
                templateUrl: 'templates/favourites.html',
                controller: 'FavouriteController'
            }
        }
    })
    $stateProvider.state('feeds/sports', {
        url: 'feeds/sports',
        views: {
            menuContent: {
                templateUrl: 'templates/sports.html',
                controller: 'FeedController'
            }
        }
    })
    $stateProvider.state('feeds/business', {
        url: '/feeds/:feeds',
        views: {
            menuContent: {
                templateUrl: 'templates/feeds.html',
                controller: 'FeedController'
            }
        }
    })
    $stateProvider.state('feeds/money', {
        url: '/feeds/money',
        views: {
            menuContent: {
                templateUrl: 'templates/feeds.html',
                controller: 'FeedController'
            }
        }
    })
    $stateProvider.state('feeds/entertainment', {
        url: '/feeds/entertainment',
        views: {
            menuContent: {
                templateUrl: 'templates/feeds.html',
                controller: 'FeedController'
            }
        }
    })
    $stateProvider.state('feeds/people', {
        url: '/feeds/people',
        views: {
            menuContent: {
                templateUrl: 'templates/feeds.html',
                controller: 'FeedController'
            }
        }
    })
    $stateProvider.state('feeds/health', {
        url: '/feeds/health',
        views: {
            menuContent: {
                templateUrl: 'templates/feeds.html',
                controller: 'FeedController'
            }
        }
    })
    $stateProvider.state('feeds/world', {
        url: '/feeds/world',
        views: {
            menuContent: {
                templateUrl: 'templates/feeds.html',
                controller: 'FeedController'
            }
        }
    })
    $stateProvider.state('clear', {
        url: '/clear',
        views: {
            menuContent: {
                controller: 'ClearController'
            }
        }
    })

    $stateProvider.state('help', {
        url: '/help',
        views: {
            menuContent: {
                templateUrl: 'help.html'
            }
        }

    })
})

.controller("ExampleController", function($scope, $cordovaSocialSharing) {

    $scope.shareAnywhere = function() {
        $cordovaSocialSharing.share("This is your message", "This is your subject", "www/imagefile.png", "http://blog.nraboy.com");
    }

    $scope.shareViaTwitter = function(message, image, link) {
        $cordovaSocialSharing.canShareVia("twitter", message, image, link).then(function(result) {
            $cordovaSocialSharing.shareViaTwitter(message, image, link);
        }, function(error) {
            alert("Cannot share on Twitter");
        });
    }

});
