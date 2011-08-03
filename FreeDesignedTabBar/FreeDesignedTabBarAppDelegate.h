//
//  FreeDesignedTabBarAppDelegate.h
//  FreeDesignedTabBar
//
//  Created by プー坊 on 11/08/03.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface FreeDesignedTabBarAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {
    UIImageView *_backGroundImageView;
}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
