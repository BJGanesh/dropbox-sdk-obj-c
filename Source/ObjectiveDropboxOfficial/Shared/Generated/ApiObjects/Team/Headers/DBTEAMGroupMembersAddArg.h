///
/// Copyright (c) 2016 Dropbox, Inc. All rights reserved.
///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>

#import "DBSerializableProtocol.h"
#import "DBTEAMIncludeMembersArg.h"

@class DBTEAMGroupMembersAddArg;
@class DBTEAMGroupSelector;
@class DBTEAMMemberAccess;

#pragma mark - API Object

///
/// The `GroupMembersAddArg` struct.
///
/// This class implements the `DBSerializable` protocol (serialize and
/// deserialize instance methods), which is required for all Obj-C SDK API route
/// objects.
///
@interface DBTEAMGroupMembersAddArg : DBTEAMIncludeMembersArg <DBSerializable>

#pragma mark - Instance fields

/// Group to which users will be added.
@property (nonatomic, readonly) DBTEAMGroupSelector * _Nonnull group;

/// List of users to be added to the group.
@property (nonatomic, readonly) NSArray<DBTEAMMemberAccess *> * _Nonnull members;

#pragma mark - Constructors

///
/// Full constructor for the struct (exposes all instance variables).
///
/// @param group Group to which users will be added.
/// @param members List of users to be added to the group.
/// @param returnMembers Whether to return the list of members in the group.
/// Note that the default value will cause all the group members  to be returned
/// in the response. This may take a long time for large groups.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithGroup:(DBTEAMGroupSelector * _Nonnull)group
                              members:(NSArray<DBTEAMMemberAccess *> * _Nonnull)members
                        returnMembers:(NSNumber * _Nullable)returnMembers;

///
/// Convenience constructor (exposes only non-nullable instance variables with
/// no default value).
///
/// @param group Group to which users will be added.
/// @param members List of users to be added to the group.
///
/// @return An initialized instance.
///
- (nonnull instancetype)initWithGroup:(DBTEAMGroupSelector * _Nonnull)group
                              members:(NSArray<DBTEAMMemberAccess *> * _Nonnull)members;

@end

#pragma mark - Serializer Object

///
/// The serialization class for the `GroupMembersAddArg` struct.
///
@interface DBTEAMGroupMembersAddArgSerializer : NSObject

///
/// Serializes `DBTEAMGroupMembersAddArg` instances.
///
/// @param instance An instance of the `DBTEAMGroupMembersAddArg` API object.
///
/// @return A json-compatible dictionary representation of the
/// `DBTEAMGroupMembersAddArg` API object.
///
+ (NSDictionary * _Nonnull)serialize:(DBTEAMGroupMembersAddArg * _Nonnull)instance;

///
/// Deserializes `DBTEAMGroupMembersAddArg` instances.
///
/// @param dict A json-compatible dictionary representation of the
/// `DBTEAMGroupMembersAddArg` API object.
///
/// @return An instantiation of the `DBTEAMGroupMembersAddArg` object.
///
+ (DBTEAMGroupMembersAddArg * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end
