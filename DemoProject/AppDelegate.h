//
//  AppDelegate.h
//  DemoProject
//
//  Created by Akshay Shukla on 11/07/19.
//  Copyright © 2019 Akshay Shukla. All rights reserved.
//

#import <UIKit/UIKit.h>
#import <CoreData/CoreData.h>

@interface AppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong) NSPersistentContainer *persistentContainer;

- (void)saveContext;


@end

