//
//  PatientsTVC.h
//  CoreData
//
//  Created by Ray Amour on 12/24/13.
//  Copyright (c) 2013 Ray Amour. All rights reserved.
//

#import <UIKit/UIKit.h>
#import "Patient.h"

@interface PatientsTVC : UITableViewController <NSFetchedResultsControllerDelegate>

@property (nonatomic, strong) Patient *patient;

@end
