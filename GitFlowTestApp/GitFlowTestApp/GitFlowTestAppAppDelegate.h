//
//  GitFlowTestAppAppDelegate.h
//  GitFlowTestApp
//
//  Created by Andrey Yegorov on 9/1/11.
//  Copyright 2011 __MyCompanyName__. All rights reserved.
//

#import <UIKit/UIKit.h>

@class GitFlowTestAppViewController;

@interface GitFlowTestAppAppDelegate : NSObject <UIApplicationDelegate> {

}

@property (nonatomic, retain) IBOutlet UIWindow *window;

@property (nonatomic, retain) IBOutlet GitFlowTestAppViewController *viewController;

@end
