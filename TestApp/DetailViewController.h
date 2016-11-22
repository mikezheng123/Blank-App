//
//  DetailViewController.h
//  TestApp
//
//  Created by Michael Zheng on 11/21/16.
//  Copyright © 2016 BroadcastMe. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) NSDate *detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

