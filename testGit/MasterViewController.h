//
//  MasterViewController.h
//  testGit
//
//  Created by Frédéric Plante on 2014-01-09.
//  Copyright (c) 2014 Frédéric Plante. All rights reserved.
//

#import <UIKit/UIKit.h>

@class DetailViewController;

@interface MasterViewController : UITableViewController

@property (strong, nonatomic) DetailViewController *detailViewController;

@end
