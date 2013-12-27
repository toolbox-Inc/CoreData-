//
//  Prescription.h
//  CoreData
//
//  Created by Ray Amour on 12/26/13.
//  Copyright (c) 2013 Ray Amour. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Patient;

@interface Prescription : NSManagedObject

@property (nonatomic, retain) NSString * prescriptionName;
@property (nonatomic, retain) NSString * prescriptionInstructions;
@property (nonatomic, retain) Patient *patient;

@end
