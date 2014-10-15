//
//  TVTDetailViewController.h
//  TVTest3
//
//  Created by Могрин on 10/15/14.
//  Copyright (c) 2014 Могрин. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface TVTDetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
