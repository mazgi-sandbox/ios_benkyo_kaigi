//
//  Scale.h
//  Prj20120520
//
//  Created by Hidenori Matsuki on 12/05/20.
//  Copyright (c) 2012年 __MyCompanyName__. All rights reserved.
//

#import <Foundation/Foundation.h>
#import <CoreData/CoreData.h>


@interface Scale : NSManagedObject

@property (nonatomic, retain) NSString * scaleName;
@property (nonatomic, retain) NSString * filePath;
@property (nonatomic, retain) NSSet *scores;
@end

@interface Scale (CoreDataGeneratedAccessors)

- (void)addScoresObject:(NSManagedObject *)value;
- (void)removeScoresObject:(NSManagedObject *)value;
- (void)addScores:(NSSet *)values;
- (void)removeScores:(NSSet *)values;

@end
