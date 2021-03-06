///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"

@class DBUSERSGetAccountError;

#pragma mark - API Object

///
/// The `GetAccountError` union.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBUSERSGetAccountError : NSObject <DBSerializable>

#pragma mark - Instance fields

/// The `DBUSERSGetAccountErrorTag` enum type represents the possible tag states
/// with which the `DBUSERSGetAccountError` union can exist.
typedef NS_ENUM(NSInteger, DBUSERSGetAccountErrorTag) {
  /// The specified `accountId` in `DBUSERSGetAccountArg` does not exist.
  DBUSERSGetAccountErrorNoAccount,

  /// (no description).
  DBUSERSGetAccountErrorOther,

};

/// Represents the union's current tag state.
@property (nonatomic, readonly) DBUSERSGetAccountErrorTag tag;

#pragma mark - Constructors

///
/// Initializes union class with tag state of "no_account".
///
/// Description of the "no_account" tag state: The specified `accountId` in
/// `DBUSERSGetAccountArg` does not exist.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithNoAccount;

///
/// Initializes union class with tag state of "other".
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithOther;

#pragma mark - Tag state methods

///
/// Retrieves whether the union's current tag state has value "no_account".
///
/// @return Whether the union's current tag state has value "no_account".
///
- (BOOL)isNoAccount;

///
/// Retrieves whether the union's current tag state has value "other".
///
/// @return Whether the union's current tag state has value "other".
///
- (BOOL)isOther;

///
/// Retrieves string value of union's current tag state.
///
/// @return A human-readable string representing the union's current tag state.
///
- (NSString * _Nonnull)tagName;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `DBUSERSGetAccountError` union.
///
@interface DBUSERSGetAccountErrorSerializer : NSObject

///
/// Serializes `DBUSERSGetAccountError` instances.
///
/// @param instance An instance of the `DBUSERSGetAccountError` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBUSERSGetAccountError` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBUSERSGetAccountError * _Nonnull)instance;

///
/// Deserializes `DBUSERSGetAccountError` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBUSERSGetAccountError` API object.
///
/// @return An instantiation of the `DBUSERSGetAccountError` object.
///
+ (DBUSERSGetAccountError * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
