//
//  Score.h
//  Prj20120520
//
//  Created by Hidenori Matsuki on 12/05/20.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>

@class Scale;

@interface Score : NSManagedObject

@property (nonatomic, retain) NSNumber * index;
@property (nonatomic, retain) NSManagedObject *song;
@property (nonatomic, retain) Scale *scale;

@end
