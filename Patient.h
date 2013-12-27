//
//  Patient.h
//  CoreData
//
//  Created by Ray Amour on 12/26/13.
//  Copyright (c) 2013 Ray Amour. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Prescription;

@interface Patient : NSManagedObject

@property (nonatomic, retain) NSString * patientFirstName;
@property (nonatomic, retain) NSString * patientLastName;
@property (nonatomic, retain) NSSet *prescrptions;
@end

@interface Patient (CoreDataGeneratedAccessors)

- (void)addPrescrptionsObject:(Prescription *)value;
- (void)removePrescrptionsObject:(Prescription *)value;
- (void)addPrescrptions:(NSSet *)values;
- (void)removePrescrptions:(NSSet *)values;

@end
