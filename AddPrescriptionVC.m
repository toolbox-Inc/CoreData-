//
//  AddPrescriptionVC.m
//  CoreData
//
//  Created by Ray Amour on 12/24/13.
//  Copyright (c) 2013 Ray Amour. All rights reserved.
//

#import "AddPrescriptionVC.h"

@interface AddPrescriptionVC ()

@end

@implementation AddPrescriptionVC

- (id)initWithNibName:(NSString *)nibNameOrNil bundle:(NSBundle *)nibBundleOrNil
{
    self = [super initWithNibName:nibNameOrNil bundle:nibBundleOrNil];
    if (self) {
        // Custom initialization
    }
    return self;
}

- (void)viewDidLoad
{
    [super viewDidLoad];
	// Do any additional setup after loading the view.
}

- (void)didReceiveMemoryWarning
{
    [super didReceiveMemoryWarning];
    // Dispose of any resources that can be recreated.
}



- (IBAction)cancel:(UIBarButtonItem *)sender {
    
    [super cancellAndDismiss];
}

- (IBAction)save:(UIBarButtonItem *)sender {
    
    [super saveAndDismiss];
}
@end
