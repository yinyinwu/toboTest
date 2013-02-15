//
//  toboMasterViewController.h
//  Tobo
//
//  Created by Yin Yin Wu on 2/14/13.
//  Copyright (c) 2013 Yin Yin Wu. All rights reserved.
//

#import <UIKit/UIKit.h>

@class toboDetailViewController;

#import <CoreData/CoreData.h>

@interface toboMasterViewController : UITableViewController <NSFetchedResultsControllerDelegate>

@property (strong, nonatomic) toboDetailViewController *detailViewController;

@property (strong, nonatomic) NSFetchedResultsController *fetchedResultsController;
@property (strong, nonatomic) NSManagedObjectContext *managedObjectContext;

@end
