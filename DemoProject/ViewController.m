//
//  ViewController.m
//  DemoProject
//
//  Created by Akshay Shukla on 11/07/19.
//  Copyright © 2019 Akshay Shukla. All rights reserved.
//

#import "ViewController.h"

@interface ViewController ()

@end

@implementation ViewController

- (void)viewDidLoad {
    [super viewDidLoad];
    // Do any additional setup after loading the view, typically from a nib.
}


- (void)didReceiveMemoryWarning {
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}


- (IBAction)setTitleLabel:(id)sender {
    [myTitleLabel setText:@"Hello"];
}

- (IBAction)toggleForLabel:(id)sender {
    [myTitleLabel setText:@"Hello2"];
}
@end
