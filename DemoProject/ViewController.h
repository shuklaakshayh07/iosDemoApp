//
//  ViewController.h
//  DemoProject
//
//  Created by Akshay Shukla on 11/07/19.
//  Copyright © 2019 Akshay Shukla. All rights reserved.
//

#import <UIKit/UIKit.h>

@interface ViewController : UIViewController
{
    
    IBOutlet UILabel *myTitleLabel;
    IBOutletCollection(UIImageView) NSArray *Dice1;
}
- (IBAction)setTitleLabel:(id)sender;
- (IBAction)toggleForLabel:(id)sender;



@end

