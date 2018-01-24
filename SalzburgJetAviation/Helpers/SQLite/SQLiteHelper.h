//
//  SQLiteHelper.h
//  SalzburgJetAviation
//
//  Created by John Nik on 12/8/17.
//  Copyright © 2017 johnik703. All rights reserved.
//

#import <Foundation/Foundation.h>

@interface SQLiteHelper : NSObject

+ (BOOL)insertInTable:(NSString *)table params:(NSDictionary *)dic;
+ (BOOL)updateInTable:(NSString *)table params:(NSDictionary *)dic where:(NSDictionary *)whereDic;
+ (BOOL)deleteInTable:(NSString *)table where:(NSDictionary *)whereDic;
+ (BOOL)deleteInTable:(NSString *)table;

+ (BOOL)insertInDatabase:(NSString *)database table:(NSString *)table params:(NSDictionary *)dic;
+ (BOOL)updateInDatabase:(NSString *)database table:(NSString *)table params:(NSDictionary *)dic where:(NSDictionary *)whereDic;
+ (BOOL)deleteInDatabase:(NSString *)database table:(NSString *)table where:(NSDictionary *)whereDic;
+ (BOOL)deleteInDatabaseDB:(NSString *)database table:(NSString *)table;

@end
