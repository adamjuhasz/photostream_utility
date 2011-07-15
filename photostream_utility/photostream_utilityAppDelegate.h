//
//  photostream_utilityAppDelegate.h
//  photostream_utility
//
//  Created by Marta Juhasz on 7/14/11.
//  Copyright 2011 asterisk. All rights reserved.
//

#import <UIKit/UIKit.h>

@class MainViewController;

@interface photostream_utilityAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet MainViewController *mainViewController;

@end
