//
//  TVTMasterViewController.h
//  TVTest3
//
//  Created by Могрин on 10/15/14.
//  Copyright (c) 2014 Могрин. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "TVTDirectory.h"

@interface TVTMasterViewController : UITableViewController

@property (nonatomic, retain) NSMutableArray *directories;
@property (nonatomic, retain) TVTDirectory *runDirectory;
@property (nonatomic, retain) NSNumber *runDirectoryId;


@end
