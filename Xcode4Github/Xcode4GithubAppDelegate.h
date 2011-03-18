//
//  Xcode4GithubAppDelegate.h
//  Xcode4Github
//
//  Created by Dário on 17/03/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface Xcode4GithubAppDelegate : NSObject <UIApplicationDelegate, UITabBarControllerDelegate> {

} 

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet UITabBarController *tabBarController;

@end
