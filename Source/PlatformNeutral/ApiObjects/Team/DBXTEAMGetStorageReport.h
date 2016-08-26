///
/// Auto-generated by Stone, do not modify.
///

#import <Foundation/Foundation.h>
#import "DBXSerializableProtocol.h"
#import "DBXTEAMBaseDfbReport.h"

@class DBXTEAMGetStorageReport;
@class DBXTEAMStorageBucket;

/// 
/// The `DBXTEAMGetStorageReport` struct.
/// 
/// This class implements the `DBXSerializable` protocol (`serialize` and
/// `deserialize` instance methods), which is required for all Obj-C SDK API
/// route objects.
/// 
/// Storage Report Result. Each of the items in the storage report is an array
/// of values, one value per day. If there is no data for a day, then the value
/// will be None.
/// 
@interface DBXTEAMGetStorageReport : DBXTEAMBaseDfbReport <DBXSerializable> 

/// Sum of the shared, unshared, and datastore usages, for each day.
@property (nonatomic) NSArray<NSNumber *> * _Nonnull totalUsage;

/// Array of the combined size (bytes) of team members' shared folders, for each
/// day.
@property (nonatomic) NSArray<NSNumber *> * _Nonnull sharedUsage;

/// Array of the combined size (bytes) of team members' root namespaces, for
/// each day.
@property (nonatomic) NSArray<NSNumber *> * _Nonnull unsharedUsage;

/// Array of the number of shared folders owned by team members, for each day.
@property (nonatomic) NSArray<NSNumber *> * _Nonnull sharedFolders;

/// Array of storage summaries of team members' account sizes. Each storage
/// summary is an array of key, value pairs, where each pair describes a storage
/// bucket. The key indicates the upper bound of the bucket and the value is the
/// number of users in that bucket. There is one such summary per day. If there
/// is no data for a day, the storage summary will be empty.
@property (nonatomic) NSArray<NSArray<DBXTEAMStorageBucket *> *> * _Nonnull memberStorageMap;

/// Full constructor for the `GetStorageReport` struct (exposes all instance
/// variables).
- (nonnull instancetype)initWithStartDate:(NSString * _Nonnull)startDate totalUsage:(NSArray<NSNumber *> * _Nonnull)totalUsage sharedUsage:(NSArray<NSNumber *> * _Nonnull)sharedUsage unsharedUsage:(NSArray<NSNumber *> * _Nonnull)unsharedUsage sharedFolders:(NSArray<NSNumber *> * _Nonnull)sharedFolders memberStorageMap:(NSArray<NSArray<DBXTEAMStorageBucket *> *> * _Nonnull)memberStorageMap;

/// Returns a human-readable representation of the `DBXTEAMGetStorageReport`
/// object.
- (NSString * _Nonnull)description;

@end


/// 
/// The serialization class for the `DBXTEAMGetStorageReport` struct.
/// 
@interface DBXTEAMGetStorageReportSerializer : NSObject 

/// Returns a json-compatible dictionary representation of the
/// `DBXTEAMGetStorageReport` object from an instantiation.
+ (NSDictionary * _Nonnull)serialize:(DBXTEAMGetStorageReport * _Nonnull)obj;

/// Returns an instantiation of the `DBXTEAMGetStorageReport` object from a
/// json-compatible dictionary representation.
+ (DBXTEAMGetStorageReport * _Nonnull)deserialize:(NSDictionary * _Nonnull)dict;

@end