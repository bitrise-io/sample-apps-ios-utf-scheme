//
//  DetailViewController.h
//  bitrise-sample-utf
//
//  Created by Viktor Benei on 09/10/15.
//  Copyright © 2015 bitrise. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;
@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;

@end

