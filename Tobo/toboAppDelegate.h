//
//  toboAppDelegate.h
//  Tobo
//
//  Created by Yin Yin Wu on 2/14/13.
//  Copyright (c) 2013 Yin Yin Wu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface toboAppDelegate : UIResponder <UIApplicationDelegate>

@property (strong, nonatomic) UIWindow *window;

@property (readonly, strong, nonatomic) NSManagedObjectContext *managedObjectContext;
@property (readonly, strong, nonatomic) NSManagedObjectModel *managedObjectModel;
@property (readonly, strong, nonatomic) NSPersistentStoreCoordinator *persistentStoreCoordinator;

- (void)saveContext;
- (NSURL *)applicationDocumentsDirectory;

@property (strong, nonatomic) UINavigationController *navigationController;

@end
