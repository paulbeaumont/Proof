//
//  DetailViewController.h
//  Proof
//
//  Created by Paul Beaumont on 6/08/13.
//  Copyright (c) 2013 Paul Beaumont. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController <UISplitViewControllerDelegate>

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
