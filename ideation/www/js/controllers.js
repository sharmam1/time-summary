var app = angular.module('starter.controllers', [])

app.controller('MainCtrl', function($scope, $ionicSideMenuDelegate, LoginService, $ionicPopup, $state) {
    $scope.toggleLeft = function() {
        $ionicSideMenuDelegate.toggleLeft();
    };
    $scope.toggleRight = function() {
        $ionicSideMenuDelegate.toggleRight();
    };
    $scope.toggleMenu = function() {
        $scope.sideMenuController.toggleLeft();
    };
})

.controller('LoginCtrl', function($scope, LoginService, $ionicPopup, $state) {
        $scope.data = {};

        $scope.login = function() {
            LoginService.loginUser($scope.data.username, $scope.data.password).success(function(data) {
                window.localStorage['name'] = $scope.data.username;
                window.localStorage['pwd'] = $scope.data.password;
                $state.go('home');
            }).error(function(data) {
                window.localStorage['name'] = '';
                window.localStorage['pwd'] = '';
                var alertPopup = $ionicPopup.alert({
                    title: 'Login failed!',
                    template: 'Please check your credentials!'
                });
            });
        }
    })
    .controller('MapController', function($scope, $ionicLoading, $compile) {
        $scope.initialize = function() {
            var santosh = navigator.geolocation.getCurrentPosition(showPosition);

            function showPosition(position) {
                $scope.latitude = position.coords.latitude;
                longitude = position.coords.longitude;

                var myLatlng = new google.maps.LatLng(position.coords.latitude, position.coords.longitude);

                var mapOptions = {
                    center: myLatlng,
                    zoom: 16,
                    mapTypeId: google.maps.MapTypeId.ROADMAP
                };
                var map = new google.maps.Map(document.getElementById("map"),
                    mapOptions);


                var marker = new google.maps.Marker({
                    position: myLatlng,
                    map: map,
                    title: 'Uluru (Ayers Rock)'
                });

                google.maps.event.addListener(marker, 'click', function() {
                    infowindow.open(map, marker);
                });

                $scope.map = map;
            }
            //google.maps.event.addDomListener(window, 'load', initialize);

        }
    })

.controller('FeedController', function($http, $scope, $stateParams, $ionicPopup) {
    var rssLink;
    $scope.init = function() {
        var feeds = $stateParams.feeds;
        $http.get('js/links.json').success(function(data) {
            angular.forEach(data, function(value, key) {
                //$scope.searchByName contains the name to be matched
                if (key === feeds) {
                    //$scope.searchById is the id to be returned
                    rssLink = value;
                    $http.get("http://www.ajax.googleapis.com/ajax/services/feed/load", {
                            params: {
                                "v": "1.0",
                                "q": rssLink,
                                "num": "15"
                            }
                        })
                        .success(function(data) {
                            $scope.rssTitle = data.responseData.feed.title;
                            $scope.rssUrl = data.responseData.feed.feedUrl;
                            $scope.rssSiteUrl = data.responseData.feed.link;
                            $scope.entries = data.responseData.feed.entries;
                            $scope.santosh = 'santosh';
                        })
                        .error(function(data) {
                            console.log("ERROR: " + data);
                        });

                }
            });

        });

    }
    $scope.browse = function(v) {
        window.open(v, "_system", "location=yes");
    }
    $scope.onHold = function(title, content, url) {
        $ionicPopup.show({
              template: '',
              title: 'choose Options',
              scope: $scope,
              buttons: [
                {
                  text: 'Add to favourites',

                  onTap: function(e) { return 'addToFavourate'; }
                },
                { text: 'Share', onTap: function(e) { return 'stuff'; } }
              ]
              }).then(function(res) {

                if (res == 'addToFavourate') {
                  if (typeof window.localStorage['favourites'] == 'undefined') {
                     window.localStorage['favourites'] = '[]';
                  }

                 // Get allready stored favourate objects
                 favsFromLocalStorageString = window.localStorage['favourites'];
                 // Convert local sorage to json object
                 favsFromLocalStorageObjects = JSON.parse(favsFromLocalStorageString);
                 // Check if its object or array of objects
                 item  = {};
                 item.title = title;
                 item.content = content;
                 item.url = url;
                 favsFromLocalStorageObjects.push(item);
                 window.localStorage['favourites'] = JSON.stringify(favsFromLocalStorageObjects);
                }
              }, function(err) {
                console.log('Err:', err);
              }, function(msg) {
                console.log('message:', msg);
              });

}
})
.controller('FavouriteController', function($http, $scope) {
    if (typeof window.localStorage['favourites'] != 'undefined') {
    $scope.entries = JSON.parse(window.localStorage['favourites']);
    $scope.browse = function(v) {
        window.open(v, "_system", "location=yes");
    }
  }
})
.controller('ClearController', function($http, $scope, $ionicPopup) {
    window.localStorage.clear();
    var alertPopup = $ionicPopup.alert({
                    title: 'Storage Cleared',
                    template: 'All favourites are cleared!'
                });
})
