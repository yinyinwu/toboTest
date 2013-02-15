//
//  toboDetailViewController.h
//  Tobo
//
//  Created by Yin Yin Wu on 2/14/13.
//  Copyright (c) 2013 Yin Yin Wu. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface toboDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
