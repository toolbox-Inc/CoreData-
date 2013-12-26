//
//  AddPrescriptionVC.h
//  CoreData
//
//  Created by Ray Amour on 12/24/13.
//  Copyright (c) 2013 Ray Amour. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoreVC.h"

@interface AddPrescriptionVC : CoreVC

@property (weak, nonatomic) IBOutlet UITextField *prescriptionName;
@property (weak, nonatomic) IBOutlet UITextField *instructionsLabel;

- (IBAction)cancel:(UIBarButtonItem *)sender;
- (IBAction)save:(UIBarButtonItem *)sender;


@end
