//
//  DetailViewController.h
//  testGit
//
//  Created by Frédéric Plante on 2014-01-09.
//  Copyright (c) 2014 Frédéric Plante. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
