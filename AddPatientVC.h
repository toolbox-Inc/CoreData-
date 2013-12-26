//
//  AddPatientVC.h
//  CoreData
//
//  Created by Ray Amour on 12/24/13.
//  Copyright (c) 2013 Ray Amour. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "CoreVC.h"

@interface AddPatientVC : CoreVC

@property (weak, nonatomic) IBOutlet UITextField *patientFirstName;
@property (weak, nonatomic) IBOutlet UITextField *patientLastName;

- (IBAction)cancel:(UIBarButtonItem *)sender;
- (IBAction)save:(UIBarButtonItem *)sender;

@property (weak, nonatomic) IBOutlet UIBarButtonItem *saveButton;

@end
