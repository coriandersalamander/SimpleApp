//
//  SimpleAppAppDelegate.h
//  SimpleApp
//
//  Created by Christopher Galasso on 2/12/17.
//  Copyright 2017 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class SimpleAppViewController;

@interface SimpleAppAppDelegate : NSObject <UIApplicationDelegate> {
    UIWindow *window;
    SimpleAppViewController *viewController;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;
@property (nonatomic, retain) IBOutlet SimpleAppViewController *viewController;

@end

