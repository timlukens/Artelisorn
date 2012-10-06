//
//  DetailViewController.h
//  Artelisorn
//
//  Created by tim on 10/5/12.
//  Copyright (c) 2012 Cool Bros Inc. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface DetailViewController : UIViewController

@property (strong, nonatomic) id detailItem;

@property (weak, nonatomic) IBOutlet UILabel *detailDescriptionLabel;
@end
