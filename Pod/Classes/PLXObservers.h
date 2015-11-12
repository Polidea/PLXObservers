//
//  PLXObservers.h
//  PLXObservers
//
//  Created by Antoni Kedracki on 07/02/14.
//  Copyright (c) 2014 Antoni Kedracki. All rights reserved.
//

#import <Foundation/Foundation.h>

/**
 PLXObservers helps to implement the multi-observer pattern.
 */
@interface PLXObservers : NSObject

/**
 Designated initializer.

 @param observerProtocol The protocol the observers will implement.

 @return new instance of PLXObservers. You should cast (and store) it as PLXObservers<observerProtocol> *
*/
- (id)initWithObserverProtocol:(Protocol *)observerProtocol;

/**
 Adds new observer. It should implement the protocol the receiver was initialized with.

 @param observer the new observer

 Registering the same object more then once will result in recieving the same notifications multiple times.
*/
- (void)addObserver:(id<NSObject>)observer;

/**
 Removes a observer.

 @param observer the to be removed observer

 Calling this method will only remove one registration for a given observer. You should call -removeObserver: once for each time -addObserver: was used to full unregister the observer.
*/
- (void)removeObserver:(id<NSObject>)observer;

@end
