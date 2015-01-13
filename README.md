# RateView - iOS (Objective-C)

`RateView` is a `UIView` subclass that creates a customizable rating view containing rating stars in it. It fills out the stars in `percentage fill` manner. It can be used for -
* displaying a rating for an item `canRate = NO`  OR 
* actually provide user a chance to rate any product or item `canRate = YES`.

## Requirements

* iOS 6.0 or later.
* ARC enabled.

## Installation
* Want a Pod for this, just add following line to your podfile-
```
pod 'RateView'
```
* You can directly copy the source files from RateView folder.

## How To Use

Configuring RateView is as simple as :
```objective-c
RateView* rv = [RateView rateViewWithRating:3.7f];
[self.view addSubview:rv];
```

RateView takes it over from here. 
* It uses CoreGraphics Context to draw the Star shapes with transparent background and appropriately percent fills them by calculating the `rating`. 
* You should keep in mind to provide a `rating` between `0.0` to `5.0`.

## Properties

RateView comes with a property set for it's customization as needed :-

* `rating` : Rating to be used with RateView (0.0f to 5.0f)

* `canRate` : User can rate using rate view or not (Permission flag)

* `step` : Rating step when user can rate (0.0f to 1.0f)

* `starNormalColor` : Rating Star's backgroundColor
    
* `starFillColor` : Rating Star's fillColor

* `starBorderColor` : Rating Star's borderColor

* `starFillMode` : Star Fill modes Horizontal, Vertical or Axial
    
* `starSize` : starSize (width == height == size) in points

* `delegate` : register in order to listen to rating changes
    
## [UIColor colorWithPatternImage:] advantage
    
    Given that UIColor is capable of color patterns handling made from images, 
    RateView can be used to take advantage of this feature.

## How It Looks
![Screenshot1] (https://raw.githubusercontent.com/taruntyagi697/RateView/master/Screenshots/Screenshot1.png)
![Screenshot2] (https://raw.githubusercontent.com/taruntyagi697/RateView/master/Screenshots/Screenshot2.png)

    
## Demo App
    Demo app includes almost all of the property usages through a pretty basic UITableView example.
    You can go through it to see these in action at first.
