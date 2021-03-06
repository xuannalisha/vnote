//
//  VNNoteManager.h
//  Voice2Note
//
//  Created by liaojinxing on 14-6-11.
//  Copyright (c) 2014年 jinxing. All rights reserved.
//

@import Foundation;

@class VNNote;
@interface NoteManager : NSObject

@property (nonatomic, strong) NSString *docPath;

- (NSString *)createDataPathIfNeeded;

- (NSMutableArray *)readAllNotes;

- (VNNote *)readNoteWithID:(NSString *)noteID;
- (BOOL)storeNote:(VNNote *)note;
- (void)deleteNote:(VNNote *)note;
- (void)deleteAllNote;
- (VNNote *)todayNote;

+ (instancetype)sharedManager;

@end
