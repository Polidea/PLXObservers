# PLXObservers

[![CI Status](http://img.shields.io/travis/Polidea/PLXObservers.svg?style=flat)](https://travis-ci.org/Polidea/PLXObservers)
[![Version](https://img.shields.io/cocoapods/v/PLXObservers.svg?style=flat)](http://cocoapods.org/pods/PLXObservers)
[![License](https://img.shields.io/cocoapods/l/PLXObservers.svg?style=flat)](http://cocoapods.org/pods/PLXObservers)
[![Platform](https://img.shields.io/cocoapods/p/PLXObservers.svg?style=flat)](http://cocoapods.org/pods/PLXObservers)

Small tool for fast implementation of multi-observer pattern in Objective-C

## Usage
Given you have a observer protocol (basicly the same as a delegate protocol):

```Objective-C
@protocol ObserverProtocol <NSObject>

- (void)somethingDidHappen:(NSString *)message more:(NSInteger)more;

@end
```

Create an instance of PLXObservers with your delegate protocol:

```Objective-C
PLXObservers <ObserverProtocol> *observers = (PLXObservers <ObserverProtocol>*)[[PLXObservers alloc] initWithObserverProtocol:@protocol(ObserverProtocol)];
```

Add/remove as many observers (implementing your PLXObservers) as you like:

```Objective-C
[observers addObserver:myObserver1]
[observers removeObserver:myObserver2]
```    

Calling a ObserverProtocol method on the PLXObservers instance will be forwarded to the registered observers:

```Objective-C
[observers somethingDidHappen:@"test" more:123]
```

## Installation

PLXObservers is available through [CocoaPods](http://cocoapods.org). To install
it, simply add the following line to your Podfile:

    pod "PLXObservers"

## Author

Antoni Kedracki, akedracki@gmail.com  
Polidea

## License

PLXObservers is available under the MIT license. See the LICENSE file for more info.
